import cv2 as cv

img = cv.imread('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\photos\sample.jpg')

cv.imshow('sample', img)

#converting an image into greyscale 
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# cv.imshow('gray', gray)

#blur an image 
# blur = cv.GaussianBlur(img, (3,3), cv.BORDER_DEFAULT)
blur = cv.GaussianBlur(img, (7,7), cv.BORDER_DEFAULT)
# cv.imshow('Blur', blur)

# Edge cascade
# canny = cv.Canny(img, 125, 175)
canny = cv.Canny(blur, 125, 175)
# cv.imshow('Canny Edges', canny)

# Dilating the image 
# dilated = cv.dilate(canny, (3,3), iterations=1)
# dilated = cv.dilate(canny, (7,7), iterations=1)
dilated = cv.dilate(canny, (7,7), iterations=3)
# cv.imshow('Dilated', dilated)


#eroding 

eroded = cv.erode(dilated, (3,3), iterations=1 )
cv.imshow('Eroded', eroded)

# Resize
# resized = cv.resize(img, (500,500) )
resized = cv.resize(img, (500,500), interpolation= cv.INTER_CUBIC)
cv.imshow('Resized',resized )


# cropping 
cropped = img[50:200, 200:400]
cv.imshow('Cropped',cropped)
cv.waitKey(0)
