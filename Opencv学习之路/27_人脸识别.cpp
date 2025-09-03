//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//void detectFaces(bool useCamera, const string& imagePath = "") {
//    // 加载Haar级联分类器
//    CascadeClassifier faceCascade;
//    if (!faceCascade.load(cv::samples::findFile("E:\\OpenCV-4.8\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml"))) {
//        cerr << "无法加载人脸检测器模型！" << endl;
//        return;
//    }
//
//    if (useCamera) {
//        // 打开摄像头
//        VideoCapture cap(0);
//        if (!cap.isOpened()) {
//            cerr << "无法打开摄像头！" << endl;
//            return;
//        }
//
//        Mat frame;
//        while (true) {
//            // 读取一帧图像
//            cap >> frame;
//            if (frame.empty()) {
//                cerr << "无法获取图像帧！" << endl;
//                break;
//            }
//
//            Mat gray;
//            // 转换为灰度图
//            cvtColor(frame, gray, COLOR_BGR2GRAY);
//            // 直方图均衡化，提高检测效果
//            equalizeHist(gray, gray);
//
//            // 检测人脸
//            vector<Rect> faces;
//            faceCascade.detectMultiScale(gray, faces, 1.1, 5, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
//
//            // 绘制人脸框
//            for (size_t i = 0; i < faces.size(); i++) {
//                rectangle(frame, faces[i], Scalar(0, 255, 0), 2);
//                putText(frame, "Face", Point(faces[i].x, faces[i].y - 10),
//                    FONT_HERSHEY_SIMPLEX, 0.9, Scalar(0, 255, 0), 2);
//            }
//
//            // 显示结果
//            imshow("Face Detection", frame);
//
//            // 按'q'键退出
//            if (waitKey(1) == 'q') {
//                break;
//            }
//        }
//        cap.release();
//    }
//    else {
//        // 读取图片
//        Mat img = imread(imagePath);
//        if (img.empty()) {
//            cerr << "无法读取图片，请检查路径是否正确！" << endl;
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
//    // 两种模式可选：
//    // 1. 使用摄像头实时检测
//    detectFaces(true);
//
//    // 2. 检测图片中的人脸（请替换为你的图片路径）
//    // detectFaces(false, "test.jpg");
//
//    return 0;
//}
