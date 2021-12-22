import cv2 as cv 

# Reading photos
img = cv.imread('photos/sample.jpg')
img2 = cv.imread('photos/movie.jpg')

cv.imshow('sample', img)
# cv.imshow('movie', img2)
cv.waitKey(0)

# Reading videos

capture = cv.VideoCapture('videos/testvid.mkv')

while True:
    isTrue, frame = capture.read()
    cv.imshow('Video', frame)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break
        
capture.release()        
cv.destroyAllWindows()
