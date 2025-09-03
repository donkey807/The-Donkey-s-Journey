//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// ���ƻҶ�ͼֱ��ͼ
//void drawGrayHistogram(Mat& src, Mat& histImage) {
//    // ֱ��ͼ����
//    int histSize = 256;
//    float range[] = { 0, 256 };
//    const float* histRange = { range };
//
//    // ����ֱ��ͼ
//    Mat hist;
//    calcHist(&src, 1, 0, Mat(), hist, 1, &histSize, &histRange, true, false);
//
//    // ��һ��ֱ��ͼ
//    normalize(hist, hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//
//    // ����ֱ��ͼ
//    histImage.setTo(Scalar(255, 255, 255)); // ��ɫ����
//    int binWidth = cvRound((double)histImage.cols / histSize);
//
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(hist.at<float>(i))),
//            Scalar(0, 0, 0), 2, 8, 0); // ��ɫ����
//    }
//}
//
//// ���Ʋ�ɫͼֱ��ͼ
//void drawColorHistogram(Mat& src, Mat& histImage) {
//    // ֱ��ͼ����
//    int histSize = 256;
//    float range[] = { 0, 256 };
//    const float* histRange = { range };
//
//    // �����ɫͨ��
//    vector<Mat> bgr_planes;
//    split(src, bgr_planes);
//
//    // ����ÿ��ͨ����ֱ��ͼ
//    Mat b_hist, g_hist, r_hist;
//    calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, true, false);
//    calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, true, false);
//    calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, true, false);
//
//    // ��һ��ֱ��ͼ
//    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//
//    // ����ֱ��ͼ
//    histImage.setTo(Scalar(255, 255, 255)); // ��ɫ����(�����ݱ�����в���)
//    int binWidth = cvRound((double)histImage.cols / histSize);
//
//    // ������ɫͨ��
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(b_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(b_hist.at<float>(i))),
//            Scalar(255, 0, 0), 2, 8, 0);
//    }
//
//    // ������ɫͨ��
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(g_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(g_hist.at<float>(i))),
//            Scalar(0, 255, 0), 2, 8, 0);
//    }
//
//    // ���ƺ�ɫͨ��
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(r_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(r_hist.at<float>(i))),
//            Scalar(0, 0, 255), 2, 8, 0);
//    }
//}
//
//int main() {
//    // ��ȡͼ��
//    Mat src = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg"); // �滻Ϊ���ͼ��·��
//    if (src.empty()) {
//        cout << "�޷���ȡͼ��" << endl;
//        return -1;
//    }
//
//    // ����ֱ��ͼͼ��
//    int hist_w = 512; int hist_h = 400;
//    Mat histImage(hist_h, hist_w, CV_8UC3);
//
//    // ��ʾԭͼ
//    namedWindow("ԭͼ", WINDOW_AUTOSIZE);
//    imshow("ԭͼ", src);
//
//    // ���Ʋ�ɫֱ��ͼ
//    drawColorHistogram(src, histImage);
//    namedWindow("��ɫֱ��ͼ", WINDOW_AUTOSIZE);
//    imshow("��ɫֱ��ͼ", histImage);
//
//    // ת��Ϊ�Ҷ�ͼ�����ƻҶ�ֱ��ͼ
//    Mat gray_src;
//    cvtColor(src, gray_src, COLOR_BGR2GRAY);
//    namedWindow("�Ҷ�ͼ", WINDOW_AUTOSIZE);
//    imshow("�Ҷ�ͼ", gray_src);
//
//    Mat grayHistImage(hist_h, hist_w, CV_8UC3);
//    drawGrayHistogram(gray_src, grayHistImage);
//    namedWindow("�Ҷ�ֱ��ͼ", WINDOW_AUTOSIZE);
//    imshow("�Ҷ�ֱ��ͼ", grayHistImage);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
