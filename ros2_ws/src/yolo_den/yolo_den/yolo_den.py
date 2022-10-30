#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2
from scipy import spatial
import numpy as np


class NMSNode(Node):
    def __init__(self):
        super().__init__("imageee")

        self.subs_ = self.create_subscription(Image, "image_raw", self.callback_, 10)
        self.timer_ = self.create_timer(1.0, self.callback_)
        self.get_logger().info("Subs2 başladi amk!")
        self.bridge = CvBridge()
    def boxInPreviousFrame(self, previous_people_detections, current_box):
        centerX, centerY, width, height = current_box
        dist = np.inf 
        for i in range(10):
            temp_dist, index = previous_people_detections[i].query([(centerX, centerY)])
            if (temp_dist < dist):
                dist = temp_dist

        if (dist > (max(width, height)/2)):
            return False
        return True

    def count_people(self, idxs, boxes, classIDs, people_count, previous_people_detections):
        
        current_people_detections = [(0, 0)]
        if len(idxs) > 0:
            for i in idxs.flatten():
                (x, y) = (boxes[i][0], boxes[i][1])
                (w, h) = (boxes[i][2], boxes[i][3])

                if (classIDs[i] == "human"):
                    people_count += 1

                    if (not self.boxInPreviousFrame(previous_people_detections, (x + (w//2), y+ (h//2), w, h))):
                        people_count += 1
                
        return people_count, current_people_detections

    def callback_(self):
        self.get_logger().info("yolo kodu amk!")
        msg = Image()
        self.previous_people_detections = [spatial.KDTree([(0,0)])]*10
        #self.num_frames, self.people_count = 0, 0
        self.people_count = 0
        while True:
            try:
                frame = self.bridge.imgmsg_to_cv2(msg, "passthrough")
                msg.data = frame
                self.get_logger().info(msg.data)
                people_count, current_people_detections = self.count_people(people_count)
                self.previous_people_detections.pop(0) 
                self.previous_people_detections.append(spatial.KDTree(current_people_detections))
                cv2.imshow("Detection Window", frame)

                if cv2.waitKey(1) == 27:
                    break
                
            except CvBridgeError as e:
                print(e)

            #self.frame = np.array(self.frame, np.uint8)      

            


def main(args=None):
    rclpy.init(args=args)
    node = NMSNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
