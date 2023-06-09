import cv2


print("package imported")


img = cv2.imread("/home/aishanya/Desktop/resources/dh2.jpeg")


cv2.imshow("output" ,img)
cv2.waitKey(0)