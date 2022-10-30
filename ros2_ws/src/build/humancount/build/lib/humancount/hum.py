import rclpy
from rclpy.node import Node
import cv2
import numpy as np
from std_msgs.msg import Int64
from darknet_ros_msgs.msg import BoundingBoxes
import message_filters
from rclpy.qos import qos_profile_sensor_data
from px4_msgs.msg import VehicleLocalPosition
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		self.pub = self.create_publisher(Image, "termal_frames", 10)
		self.timer = self.create_timer(0.1, self.counter_)
		self.cap = cv2.VideoCapture('/dev/video1')
		self.br = CvBridge()
		
		self.subs2= self.create_subscription(Int64, "image_raw", self.counter_,10)
		self.subs2
		self.subscription = message_filters.Subscriber(self, BoundingBoxes, "darknet_ros/bounding_boxes", qos_profile=qos_profile_sensor_data)
		self.subscription2 = message_filters.Subscriber(self, VehicleLocalPosition, "fmu/vehicle_local_position/out", qos_profile=qos_profile_sensor_data)
		#queue_size = 30
		self.ts = message_filters.ApproximateTimeSynchronizer([self.subscription, self.subscription2], 1, 1,allow_headerless= True)	
		self.ts.registerCallback(self.counter_)
		self.count_list = [0]
		self.max_value = 0
		self.count = 0
		self.Human_count = [0]
		self.person_count = 0
		self.positionx = [0]
		self.positiony = [0]
	def termal_(self):
		x=0
		y=0  
		while True:
			ret, frame = self.cap.read()
			try: 
				if ret == True:
					self.pub.publish(self.br.cv2_to_imgmsg(frame, "bgr8"))
				if ret:
					assert not isinstance(frame,type(None)), 'frame not found'
				
				hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV) # renk algilama işlemi başlatıldı
				low_red = np.array([192, 12, 142])    # alt kırımızı rengin bilgileri girildi
				high_red = np.array([110, 1, 156])  # üst kırımızı rengin bilgileri girildi
				red_mask = cv2.inRange(hsv_frame, low_red, high_red)  # renk bilgileri değişkenen atandı
				contours, _ = cv2.findContours(red_mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
				contours = sorted(contours, key=lambda x:cv2.contourArea(x), reverse=True)
    			
				for cnt in contours:
					(x, y, w, h) = cv2.boundingRect(cnt) # algılanan rengin x ve y koordinatları bulundu        

                                            # boy      renk  kalinlik
					cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 0, 255), 2)  # x koordinatı ekranda gösterildi
				print("x ",x," y ",y,)
				
			except KeyboardInterrupt:
				break
		return x,y	
	def counter_(self, msg, msg2):
		for a in msg.bounding_boxes:
			self.Centerx = (((a.xmax + a.xmin)//2))
			self.Centery=  (((a.ymax + a.ymin)//2))
			self.Center = (self.Centerx,self.Centery)
			self.get_logger().info(" Human Center:{}".format(str(self.Center)))
			x,y = termal()
			if x*4==a.xmin and y*4==a.ymin:
				if a.xmax >= 0:
					self.positionx.append(msg2.x)
					self.positiony.append(msg2.y)
					if (243<self.Centery<252):
						self.person_count = self.count + 1
						self.get_logger().info("Count:{}".format(str(self.person_count)))
						self.Human_count.append(int(self.person_count))
						self.get_logger().info("Human Count:{}".format(str(sum(self.Human_count))))

						self.Center_Pointx = ((sum(self.positionx))/(sum(self.Human_count)))
						self.Center_Pointy = ((sum(self.positiony))/(sum(self.Human_count)))
						self.Center_Point = (self.Center_Pointx,self.Center_Pointy)
						self.get_logger().info(" Humans Center Point:{}".format(str(self.Center_Point)))	 
					
						self.get_logger().info(" Humans Center Point:{}".format(str(self.Center_Point)))		
	"""
		try:
			self.count_list.append(msg2.count)
			self.get_logger().info("Count list:{}".format(self.count_list))
			if len(self.count_list)==70:
				#listedeki en büyük değeri başka bir yere atsın 
				#geriye kalanları silsin
				self.max_value = max(self.count_list)
				self.Human_count.append(self.max_value)
				self.get_logger().info("Human Count:{}".format(sum(self.Human_count)))
				self.count_list = [0]
		except AttributeError:
			print("liste silindi")"""
	

			
def main(args=None):
	rclpy.init(args=args)
	minimal_subscriber = MinimalSubscriber()
	print("HUMAN COUNTING")
	rclpy.spin(minimal_subscriber)
	minimal_subscriber.destroy_node()
	rclpy.shutdown()

if __name__ == '__main__':
	main()
	
	
