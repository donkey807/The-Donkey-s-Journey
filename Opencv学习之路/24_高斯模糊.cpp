//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <cmath>
//#define M_PI 3.1415
//using namespace cv;
//using namespace std;
//
//// 手动创建高斯核
//Mat createGaussianKernel(int ksize, double sigma) {
//    // 确保核大小为奇数
//    if (ksize % 2 == 0) ksize++;
//
//    Mat kernel(ksize, ksize, CV_64F);
//    int center = ksize / 2;
//    double sum = 0.0;
//    double sigma2 = 2 * sigma * sigma;
//    double sigmaPI = M_PI * sigma2;
//
//    // 计算高斯核每个位置的值
//    for (int i = 0; i < ksize; i++) {
//        for (int j = 0; j < ksize; j++) {
//            int x = i - center;
//            int y = j - center;
//            // 二维高斯函数
//            kernel.at<double>(i, j) = exp(-(x * x + y * y) / sigma2) / sigmaPI;
//            sum += kernel.at<double>(i, j);
//        }
//    }
//
//    // 归一化核（确保所有元素之和为1，避免图像亮度变化）
//    kernel /= sum;
//    return kernel;
//}
//
//// 手动实现高斯滤波（基于卷积）
//Mat gaussianFilterManual(Mat& src, int ksize, double sigma) {
//    Mat gray;
//    if (src.channels() == 3) {
//        cvtColor(src, gray, COLOR_BGR2GRAY);
//    }
//    else {
//        gray = src.clone();
//    }
//
//    // 创建高斯核
//    Mat kernel = createGaussianKernel(ksize, sigma);
//
//    // 使用卷积实现滤波（复用之前的卷积函数）
//    Mat dst;
//    filter2D(gray, dst, -1, kernel);
//    return dst;
//}
//
//// 使用OpenCV内置高斯滤波函数
//Mat gaussianFilterBuiltIn(Mat& src, int ksize, double sigma) {
//    Mat dst;
//    // 内置函数：支持彩色图直接处理，自动处理边界
//    GaussianBlur(src, dst, Size(ksize, ksize), sigma, sigma);
//    return dst;
//}
//
//int main() {
//    // 读取图像
//    Mat src = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (src.empty()) {
//        cout << "无法读取图像！" << endl;
//        return -1;
//    }
//
//    // 滤波参数（核大小建议3/5/7，sigma>0）
//    int ksize = 5;    // 高斯核大小（奇数）
//    double sigma = 1.0; // 高斯标准差（越大越模糊）
//
//    // 两种方式实现高斯滤波
//    Mat manual_dst = gaussianFilterManual(src, ksize, sigma);
//    Mat builtin_dst = gaussianFilterBuiltIn(src, ksize, sigma);
//
//    // 显示结果
//    imshow("原图", src);
//    imshow("手动实现高斯滤波（灰度）", manual_dst);
//    imshow("OpenCV内置高斯滤波（彩色）", builtin_dst);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
