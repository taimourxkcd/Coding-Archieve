import cv2 as cv
import numpy as np 


img = cv.imread('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\photos\sample.jpg')
cv.imshow('Sample',img)

# Averaging 

average = cv.blur(img,(3,3))
# average = cv.blur(img,(7,7))
cv.imshow('Average blur', average)

#Gaussian Blur
gauss = cv.GaussianBlur(img, (7,7), 0)
cv.imshow('Gaussian blur', gauss)

#Median Blur
median = cv.medianBlur(img, 3)
cv.imshow('Median Blur', median)

#Bilateral Bluring 
bilateral = cv.bilateralFilter(img, 5, 35, 25 )
cv.imshow('Bilateral',bilateral)

cv.waitKey(0)