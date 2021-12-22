import cv2 as cv 
import numpy as np
import matplotlib.pyplot as plt

img = cv.imread('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\photos\sample.jpg')
cv.imshow('jodie', img)

# plt.imshow(img)
# plt.show()

# BGR to Grayscale
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray',gray)

#BGR TO HSV
hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
cv.imshow('HSV', hsv)

# BGR TO L * a * b
lab = cv.cvtColor(img, cv.COLOR_BGR2LAB)
cv.imshow('LAB', lab)

#BGR to RGB
rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow('RGB', rgb)

#HSV TO BGR 
hsv_bgr = cv.cvtColor(hsv, cv.COLOR_HSV2BGR)
cv.imshow('HSV ---> BGR', hsv_bgr)

#LAB TO BGR 
lab_bgr = cv.cvtColor(hsv, cv.COLOR_LAB2BGR)
cv.imshow('LAB ---> BGR', lab_bgr)

# plt.imshow(rgb)
# plt.show()


cv.waitKey(0)