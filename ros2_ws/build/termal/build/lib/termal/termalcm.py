import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int64
from cv_bridge import CvBridge
import cv2
import numpy as np

class termalPublisher(Node):
	def __init__(self):
		super().__init__('termal_publisherr')
		
		self.pub = self.create_publisher(Image, "termal_frames", 10)
		self.timer = self.create_timer(0.1, self.callback_)
		self.cap = cv2.VideoCapture('/dev/video0')
		self.br = CvBridge()
		
	def callback_(self):
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
			self.get_logger().info("Publishing termal frame")
			if cv2.waitKey(1)==27:
				break 
		

def main(args=None):
	rclpy.init(args=args)
	termal_publisher = termalPublisher()
	print("Termal Camera activated")
	rclpy.spin(termal_publisher)
	termal_publisher.destroy_node()
	rclpy.shutdown()

if __name__ == '__main__':
	main()
