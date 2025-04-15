import numpy as np
import cv2 as cv 

haar_cascade = cv.CascadeClassifier('E:\Data Mega Data\Data\Programming\Coding\Programming\OpenCV\haar_face.xml')

people = ['lana', 'tom cruise']
# features = np.load('features.npy')
# labels = np.load('labels.npy')

face_recognizer = cv.face.LBPHFaceRecognizer_create()
face_recognizer.read('face_trained.yml')


img = cv.imread(r'C:\Users\Abdul Basit\Desktop\datasets\lana\c9635b4c-87da-45c5-8112-03c8e19f530e.jpg')
# img = cv.imread(r'C:\Users\Abdul Basit\Desktop\datasets\tom cruise\1.jpg')

gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('person', gray)

# detect the face of the image 
face_rect = haar_cascade.detectMultiScale(gray, scaleFactor=1.1 , minNeighbors=4)

for (x,y,w,h) in face_rect:
    face_roi = gray[y:y+h, x:x+h]

    label, confidence = face_recognizer.predict(face_roi)
    print(f'label = {people[label]} with a confidence of {confidence}')

    cv.putText(img, str(people[label]), (20,20), cv.FONT_HERSHEY_COMPLEX, 1.0, (0,255,0), thickness=2)
    cv.rectangle(img, (x,y), (x+w, y+h) , (0,255,00), thickness=2)


cv.imshow('Detected face', img)    
cv.waitKey(0)