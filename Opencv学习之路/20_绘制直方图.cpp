//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// 绘制灰度图直方图
//void drawGrayHistogram(Mat& src, Mat& histImage) {
//    // 直方图参数
//    int histSize = 256;
//    float range[] = { 0, 256 };
//    const float* histRange = { range };
//
//    // 计算直方图
//    Mat hist;
//    calcHist(&src, 1, 0, Mat(), hist, 1, &histSize, &histRange, true, false);
//
//    // 归一化直方图
//    normalize(hist, hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//
//    // 绘制直方图
//    histImage.setTo(Scalar(255, 255, 255)); // 白色背景
//    int binWidth = cvRound((double)histImage.cols / histSize);
//
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(hist.at<float>(i))),
//            Scalar(0, 0, 0), 2, 8, 0); // 黑色线条
//    }
//}
//
//// 绘制彩色图直方图
//void drawColorHistogram(Mat& src, Mat& histImage) {
//    // 直方图参数
//    int histSize = 256;
//    float range[] = { 0, 256 };
//    const float* histRange = { range };
//
//    // 分离彩色通道
//    vector<Mat> bgr_planes;
//    split(src, bgr_planes);
//
//    // 计算每个通道的直方图
//    Mat b_hist, g_hist, r_hist;
//    calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, true, false);
//    calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, true, false);
//    calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, true, false);
//
//    // 归一化直方图
//    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//
//    // 绘制直方图
//    histImage.setTo(Scalar(255, 255, 255)); // 白色背景(对数据本身进行操作)
//    int binWidth = cvRound((double)histImage.cols / histSize);
//
//    // 绘制蓝色通道
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(b_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(b_hist.at<float>(i))),
//            Scalar(255, 0, 0), 2, 8, 0);
//    }
//
//    // 绘制绿色通道
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(g_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(g_hist.at<float>(i))),
//            Scalar(0, 255, 0), 2, 8, 0);
//    }
//
//    // 绘制红色通道
//    for (int i = 1; i < histSize; i++) {
//        line(histImage,
//            Point(binWidth * (i - 1), histImage.rows - cvRound(r_hist.at<float>(i - 1))),
//            Point(binWidth * i, histImage.rows - cvRound(r_hist.at<float>(i))),
//            Scalar(0, 0, 255), 2, 8, 0);
//    }
//}
//
//int main() {
//    // 读取图像
//    Mat src = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg"); // 替换为你的图像路径
//    if (src.empty()) {
//        cout << "无法读取图像！" << endl;
//        return -1;
//    }
//
//    // 创建直方图图像
//    int hist_w = 512; int hist_h = 400;
//    Mat histImage(hist_h, hist_w, CV_8UC3);
//
//    // 显示原图
//    namedWindow("原图", WINDOW_AUTOSIZE);
//    imshow("原图", src);
//
//    // 绘制彩色直方图
//    drawColorHistogram(src, histImage);
//    namedWindow("彩色直方图", WINDOW_AUTOSIZE);
//    imshow("彩色直方图", histImage);
//
//    // 转换为灰度图并绘制灰度直方图
//    Mat gray_src;
//    cvtColor(src, gray_src, COLOR_BGR2GRAY);
//    namedWindow("灰度图", WINDOW_AUTOSIZE);
//    imshow("灰度图", gray_src);
//
//    Mat grayHistImage(hist_h, hist_w, CV_8UC3);
//    drawGrayHistogram(gray_src, grayHistImage);
//    namedWindow("灰度直方图", WINDOW_AUTOSIZE);
//    imshow("灰度直方图", grayHistImage);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
