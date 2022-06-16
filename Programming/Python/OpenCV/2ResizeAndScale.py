import cv2 as cv 

#read image 
img = cv.imread('photos/movie.jpg')
cv.imshow('movie',img)

#rescale and resize video
def rescaleFrame(frame, scale=0.75):
    # this method will work for images, videos and live video
    width = int(frame.shape[1] * scale)
    height = int(frame.shape[0] * scale)
    dimensions = (width,height)

    return cv.resize(frame, dimensions, interpolation=cv.INTER_AREA)

#rescale and resize image 
resized_image = rescaleFrame(img)
cv.imshow('Image',resized_image)
cv.waitKey(0)

#chaning the resoultion
def changeRes(width,height):
    # only works for live video
    capture.set(3,width)
    capture.set(4,height)

#read video
capture = cv.VideoCapture('videos/testvid.mkv')

while True:
    isTrue, frame = capture.read()
    
    frame_resized = rescaleFrame(frame)

    cv.imshow('Video', frame)
    cv.imshow('Video Resized', frame_resized, scale=.2)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break
        
capture.release()        
cv.destroyAllWindows()

cv.waitKey(0)