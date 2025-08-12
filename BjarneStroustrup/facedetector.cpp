#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <iostream>

using namespace cv;
using namespace std;
using namespace cv::dnn;

int main() {
    // Load face detector
    CascadeClassifier face_cascade;
    face_cascade.load("haarcascade_frontalface_default.xml");

    // Load pre-trained emotion recognition model (e.g. FER+ model)
    Net net = readNetFromONNX("emotion-ferplus.onnx");

    // Open webcam
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        cerr << "Error opening webcam.\n";
        return -1;
    }

    string emotions[] = {"neutral", "happy", "sad", "surprise", "anger"};

    while (true) {
        Mat frame, gray;
        cap >> frame;
        if (frame.empty()) break;

        cvtColor(frame, gray, COLOR_BGR2GRAY);

        // Detect faces
        vector<Rect> faces;
        face_cascade.detectMultiScale(gray, faces);

        for (auto face : faces) {
            Mat faceROI = frame(face);
            Mat blob = blobFromImage(faceROI, 1.0 / 255.0, Size(64, 64), Scalar(), true, false);

            net.setInput(blob);
            Mat output = net.forward();

            // Find max confidence emotion
            Point classIdPoint;
            double confidence;
            minMaxLoc(output, 0, &confidence, 0, &classIdPoint);
            int label = classIdPoint.x;

            // Draw rectangle and label
            rectangle(frame, face, Scalar(255, 0, 0), 2);
            putText(frame, emotions[label], Point(face.x, face.y - 10), FONT_HERSHEY_SIMPLEX, 0.9, Scalar(0, 255, 0), 2);
        }

        imshow("Emotion Detector", frame);
        if (waitKey(10) == 27) break; // Press 'ESC' to exit
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
