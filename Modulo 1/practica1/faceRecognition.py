import cv2 as cv2

def face_recognition  (img):
    # Load the cascade
    face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
    # Convert into grayscale
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    # Detect faces
    faces = face_cascade.detectMultiScale(gray, 1.1, 4)
    # Draw rectangle around the faces
    for (x, y, w, h) in faces:
        cv2.rectangle(img, (x, y), (x+w, y+h), (255, 0, 0), 2)
    return img

def main():
    # Read the input image
    img = cv2.imread('./download.jpg')
    # Call the function to detect faces
    img = face_recognition(img)
    # Display the output
    cv2.imshow('img', img)
    cv2.waitKey()