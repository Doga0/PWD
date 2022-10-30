import rclpy 
from rclpy.node import Node 
from sensor_msgs.msg import Image 
from cv_bridge import CvBridge, CvBridgeError
import cv2 
import numpy as np
from scipy import spatial
from std_msgs.msg import Int8, Int64
from darknet_ros_msgs.msg import ObjectCount, BoundingBoxes
import message_filters
from rclpy.qos import qos_profile_sensor_data

class ImageSubscriber(Node):
	def __init__(self):
		super().__init__("image_subscriber")
		'''self.subscription = self.create_subscription(
            BoundingBoxes,
            'darknet_ros/bounding_boxes',
            self.listener_callback,
                10)
		self.subscription2 = self.create_subscription(
            ObjectCount,
            'darknet_ros/found_object',
            self.listener_callback,
                10)
		self.subscription  # prevent unused variable warningss
		self.subs2= self.create_subscription(Int64, "image_raw", self.listener_callback,10)
		self.subs2
		self.br = CvBridge()'''
		self.subs2= self.create_subscription(Int64, "image_raw", self.listener_callback,10)
		self.subs2
		self.subscription = message_filters.Subscriber(self, BoundingBoxes, "darknet_ros/bounding_boxes", qos_profile=qos_profile_sensor_data)
		self.subscription2 = message_filters.Subscriber(
		self, ObjectCount, "darknet_ros/found_object", qos_profile=qos_profile_sensor_data
		)
		#queue_size = 30
		self.ts = message_filters.ApproximateTimeSynchronizer([self.subscription, self.subscription2], 1, 1)
		self.ts.registerCallback(self.listener_callback)
   
	def boxInPreviousFrame(self, msg, previous_people_detections, current_box):
		for a in msg.bounding_boxes:
			classIDs = (a.class_id)
      
		centerX, centerY, width, height = current_box
		dist = np.inf 
		for i in range(10):
			temp_dist, index = previous_people_detections[i].query([(centerX, centerY)])
			if (temp_dist < dist):
				dist = temp_dist

		if (dist > (max(width, height)/2)):
			return False
		return True

	def count_people(self, msg,msg2,classIDs, people_count, previous_people_detections):
		#msg = BoundingBoxes()
		for a in msg.bounding_boxes:
			rows,cols = (1,1)
			arr =  []
			arr2 = []
			for i in range(rows):
				col = []
				col2= []
				for j in range(cols):
					col.append(a.xmin)
					col.append(a.ymin)
					col2.append(a.xmax)
					col2.append(a.ymax)
				arr.append(col)
				arr2.append(col2)
			arr.append(arr2)
			current_people_detections = [(0, 0)]
			x = int(a.xmin)
			y = int(a.ymin)
			w = int((a.xmax - a.xmin))
			h = int((a.ymax - a.ymin))
			classIDs = a.class_id
      
			if classIDs == "human":
				people_count = msg2.count
				#people_count += 1

				if (not self.boxInPreviousFrame(msg, previous_people_detections,(x + (w//2),y+ (h//2),w,h))):
					#people_count += 1  
					people_count = msg2.count    
			return people_count, current_people_detections

	def listener_callback(self, msg, msg2):
		self.get_logger().info("Receiving video frame")
		self.previous_people_detections = [spatial.KDTree([(0,0)])]*10
		self.people_count = 0
		self.classIDs = None
		#self.br = CvBridge()
		while True:
			try:
				#current_frame = self.br.imgmsg_to_cv2(msg, "bgr8")
				self.people_count, self.current_people_detections = self.count_people(msg, msg2, self.classIDs, self.people_count, self.previous_people_detections)
				self.previous_people_detections.pop(0)
				self.previous_people_detections.append(spatial.KDTree(self.current_people_detections)) 				    
				self.get_logger().info("people count:{}".format(str(self.people_count)))
				"""for a in msg.bounding_boxes:
					centerX = ((a.xmax + a.xmin)/2)
					self.get_logger().info("Centerx:{}".format(str(centerX)))"""
				#cv2.putText(current_frame, "Detected People:{} ".format(str(self.people_count)), (20,50), cv2.FONT_HERSHEY_SIMPLEX, 0.8,(0,0,0xFF),2,cv2.FONT_HERSHEY_COMPLEX_SMALL)
				if cv2.waitKey(1)==27:
					break
			except CvBridgeError as e:
				print(e)
  
def main(args=None):
    rclpy.init(args=args)
    image_subscriber = ImageSubscriber()
    print("HUMAN COUNTİNG...")
    rclpy.spin(image_subscriber)
    image_subscriber.destroy_node()
    rclpy.shutdown()
  
if __name__ == '__main__':
    main()
