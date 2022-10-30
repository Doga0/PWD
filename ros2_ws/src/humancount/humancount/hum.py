import rclpy
from rclpy.node import Node
import cv2
import numpy as np
from std_msgs.msg import Int64
from darknet_ros_msgs.msg import BoundingBoxes
import message_filters
from rclpy.qos import qos_profile_sensor_data
from px4_msgs.msg import VehicleLocalPosition
from std_msgs.msg import String
import os
class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		self.center_pub = self.create_publisher(String, "center_points", 10)
		self.timer = self.create_timer(0.1, self.center)
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
		self.centerpts ='kaktus'
		
	def center(self):
		msgb= String()
		msgb.data= self.centerpts
		self.center_pub.publish(msgb)		
		
	def counter_(self, msg, msg2):
		for a in msg.bounding_boxes:
			self.Centerx = (((a.xmax + a.xmin)//2))
			self.Centery=  (((a.ymax + a.ymin)//2))
			self.Center = (self.Centerx,self.Centery)
			if a.xmax >= 0:
				self.positionx.append(msg2.x)
				self.positiony.append(msg2.y)
				if (243<self.Centery<250):
					
					self.person_count = self.count + 1
					self.get_logger().info("Count:{}".format(str(self.person_count)))
					self.Human_count.append(int(self.person_count))
					self.get_logger().info("Human Count:{}".format(str(sum(self.Human_count))))

					self.Center_Pointx = ((sum(self.positionx))/(sum(self.Human_count)))
					self.Center_Pointy = ((sum(self.positiony))/(sum(self.Human_count)))
					self.Center_Point = (self.Center_Pointx,self.Center_Pointy)
					self.get_logger().info(" Humans Center Point:{}".format(str(self.Center_Point)))	 
					
					self.get_logger().info(" Humans Center Point:{}".format(str(self.Center_Point)))		
					self.centerpts = format(str(self.Center_Point))
					#os.system("gnome-terminal -- sh -c gnome-screenshot")
					with open('~/Desktop/humpos.txt', 'a') as f:
						f.writeline(self.centerpts)
						f.writeline('\n')

def main(args=None):
	rclpy.init(args=args)
	minimal_subscriber = MinimalSubscriber()
	print("HUMAN COUNTING")
	rclpy.spin(minimal_subscriber)
	minimal_subscriber.destroy_node()
	rclpy.shutdown()
	
if __name__ == '__main__':
	main()
	
