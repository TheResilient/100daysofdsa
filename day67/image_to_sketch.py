# This program converts an image to a sketch using a CV

import cv2

#get the image
img_location = 'D:\opencv projects\image\smile.jpg'
#read the image
img = cv2.imread(img_location)

#resize the image
img = cv2.resize(img, (600, 900))

#convert image to gray scale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

#invert gray scale
gray = cv2.bitwise_not(gray)

#blur the image by guassian blur
blur = cv2.GaussianBlur(gray, (37,37), 0)

#invert the image
# blur = cv2.bitwise_not(blur)

#find edges
edges = cv2.Canny(blur, 10, 0)

#create the pencil sketch
pencil = cv2.divide(gray, blur, scale=200)

#show the image
cv2.imshow('Original Image', img)
cv2.imshow('New Image', pencil)
cv2.imshow('New Image2', edges)
cv2.waitKey(0)



