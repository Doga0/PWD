import rclpy
from rclpy.node import Node
import cv2
import numpy as np
from std_msgs.msg import Int64
from darknet_ros_msgs.msg import BoundingBoxes
import message_filters
from rclpy.qos import qos_profile_sensor_data
from px4_msgs.msg import VehicleLocalPosition

class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		self.subs2= self.create_subscription(Int64, "image_raw", self.callback,10)
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
	
	def callback(self, msg):
		self.get_logger().info("imageRaw")
					
	def counter_(self, msg, msg2):
		print("doya")	
		for a in msg.bounding_boxes:
			self.Centerx = (((a.xmax + a.xmin)//2))
			self.Centery=  (((a.ymax + a.ymin)//2))
			self.Center = (self.Centerx,self.Centery)
			self.get_logger().info(" Human Center:{}".format(str(self.Center)))
		
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
