import cv2 as cv
import numpy as np 
import matplotlib.pyplot as plt


img = cv.imread('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\photos\pic4.jpg')
cv.imshow('pic4',img)

blank = np.zeros(img.shape[:2], dtype ='uint8')

gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray', gray)

mask = cv.circle(blank, (img.shape[1]//2, img.shape[0]//2), 100, 255, -1)

masked = cv.bitwise_and(gray, gray, mask=mask)
cv.imshow('Mask', masked)


# grayscale histogram
# gray_hist = cv.calcHist([gray], [0], mask, [256], [0, 256])

# plt.figure()
# plt.title('Grayscale Histogram')
# plt.xlabel('Binx')
# plt.ylabel('# of pixels')
# plt.plot(gray_hist)
# plt.xlim([0,256]) 
# plt.show()

#color histogram
plt.figure()
plt.title('Color Histogram')
plt.xlabel('Binx')
plt.ylabel('# of pixels')


colors = ('b', 'g' , 'r')
for i,col in enumerate(colors):
    hist = cv.calcHist([img], [i], masked, [256], [0,256])
    plt.plot(hist, color=col)
    plt.xlim([0,256 ])

plt.show()

cv.waitKey(0)