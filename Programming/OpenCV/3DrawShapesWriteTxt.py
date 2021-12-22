import cv2 as cv
import numpy as np

blank = np.zeros((500,500,3), dtype='uint8')
cv.imshow('Blank', blank)

img = cv.imread('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\photos\sample.jpg')
# cv.imshow('sample',img)

#paint the image a certain color


# blank[:] = 0,255,0
blank[200:300, 300:400] = 0,0,255
# cv.imshow('Green',blank) 

#Draw a rectangle
# cv.rectangle(blank, (0,0),  (250,250), (0,255,0), thickness=2)
# cv.rectangle(blank, (0,0),  (250,500), (0,255,0), thickness=2)
# cv.rectangle(blank, (0,0),  (250,500), (0,255,0), thickness=cv.FILLED)
# cv.rectangle(blank, (0,0),  (250,500), (0,255,0), thickness=-1)
# cv.rectangle(blank, (0,0),  (blank.shape[1]//2, blank.shape[0]//2), (0,255,0), thickness=-1)
# cv.imshow('Rectangle',blank)


#draw a circle
cv.circle(blank, (250,250),40, (0, 0, 255 ), thickness=3)
cv.imshow('circle',blank)

#draw a line
# cv.line(blank, (0,0), (blank.shape[1]//2, blank.shape[0]), (255,255,255) , thickness=3)
cv.line(blank, (100,250) , (300,400) , (255,255,255) , thickness=3)
cv.imshow('line',blank)


#write text on an image 
cv.putText(blank, "Hello taimoiur", (0,255), cv.FONT_HERSHEY_TRIPLEX, 1.0, (0,255,0), 2)
cv.imshow('Text', blank)

cv.waitKey(0) 

