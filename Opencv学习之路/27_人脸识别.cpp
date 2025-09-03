//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//void detectFaces(bool useCamera, const string& imagePath = "") {
//    // ����Haar����������
//    CascadeClassifier faceCascade;
//    if (!faceCascade.load(cv::samples::findFile("E:\\OpenCV-4.8\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml"))) {
//        cerr << "�޷��������������ģ�ͣ�" << endl;
//        return;
//    }
//
//    if (useCamera) {
//        // ������ͷ
//        VideoCapture cap(0);
//        if (!cap.isOpened()) {
//            cerr << "�޷�������ͷ��" << endl;
//            return;
//        }
//
//        Mat frame;
//        while (true) {
//            // ��ȡһ֡ͼ��
//            cap >> frame;
//            if (frame.empty()) {
//                cerr << "�޷���ȡͼ��֡��" << endl;
//                break;
//            }
//
//            Mat gray;
//            // ת��Ϊ�Ҷ�ͼ
//            cvtColor(frame, gray, COLOR_BGR2GRAY);
//            // ֱ��ͼ���⻯����߼��Ч��
//            equalizeHist(gray, gray);
//
//            // �������
//            vector<Rect> faces;
//            faceCascade.detectMultiScale(gray, faces, 1.1, 5, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
//
//            // ����������
//            for (size_t i = 0; i < faces.size(); i++) {
//                rectangle(frame, faces[i], Scalar(0, 255, 0), 2);
//                putText(frame, "Face", Point(faces[i].x, faces[i].y - 10),
//                    FONT_HERSHEY_SIMPLEX, 0.9, Scalar(0, 255, 0), 2);
//            }
//
//            // ��ʾ���
//            imshow("Face Detection", frame);
//
//            // ��'q'���˳�
//            if (waitKey(1) == 'q') {
//                break;
//            }
//        }
//        cap.release();
//    }
//    else {
//        // ��ȡͼƬ
//        Mat img = imread(imagePath);
//        if (img.empty()) {
//            cerr << "�޷���ȡͼƬ������·���Ƿ���ȷ��" << endl;
//            return;
//        }
//
//        Mat gray;
//        cvtColor(img, gray, COLOR_BGR2GRAY);
//        equalizeHist(gray, gray);
//
//        vector<Rect> faces;
//        faceCascade.detectMultiScale(gray, faces, 1.1, 5, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
//
//        for (size_t i = 0; i < faces.size(); i++) {
//            rectangle(img, faces[i], Scalar(0, 255, 0), 2);
//            putText(img, "Face", Point(faces[i].x, faces[i].y - 10),
//                FONT_HERSHEY_SIMPLEX, 0.9, Scalar(0, 255, 0), 2);
//        }
//
//        imshow("Face Detection", img);
//        waitKey(0);
//    }
//
//    destroyAllWindows();
//}
//
//int main() {
//    // ����ģʽ��ѡ��
//    // 1. ʹ������ͷʵʱ���
//    detectFaces(true);
//
//    // 2. ���ͼƬ�е����������滻Ϊ���ͼƬ·����
//    // detectFaces(false, "test.jpg");
//
//    return 0;
//}
