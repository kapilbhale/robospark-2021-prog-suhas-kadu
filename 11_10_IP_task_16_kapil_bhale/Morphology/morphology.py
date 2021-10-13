import cv2
import numpy as np
img = cv2.imread("morphology.JPG")
# Taking a matrix of size 5 as the kernel
kernel = np.ones((5,5), np.uint8)

#Erosion: It is useful for removing small noises. Used to detach two connected objects
img_erosion= cv2.erode(img,kernel,iterations=1)

#Dilation : erosion removes noises, but it also shrinks our object.
# Thus erosion is followed by dilation.
# Since noise is gone, they won’t come back, but our object area increases
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

cv2.imshow('Input', img)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)

filename = 'inputimage.jpg'
filename1= 'erosion image.jpg'
filename2= 'dilation image.jpg'
cv2.imwrite(filename,img)
cv2.imwrite(filename1,img_erosion)
cv2.imwrite(filename2,img_dilation)
cv2.waitKey(0)
cv2.destroyAllWindows()