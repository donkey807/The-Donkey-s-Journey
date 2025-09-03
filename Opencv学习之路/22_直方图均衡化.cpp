//改善图像对比度
//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// 灰度图全局直方图均衡化
//void grayEqualization(const Mat& src, Mat& dst) {
//    cvtColor(src, dst, COLOR_BGR2GRAY); // 转为灰度图
//    equalizeHist(dst, dst); // 直接调用OpenCV的均衡化函数
//}
//
//// 彩色图直方图均衡化（对Y通道处理，保留色彩）
//void colorEqualization(const Mat& src, Mat& dst) {
//    Mat ycrcb;
//    cvtColor(src, ycrcb, COLOR_BGR2YCrCb); // 转换到YCrCb空间（Y为亮度通道）
//
//    // 分离通道，只对亮度通道均衡化
//    vector<Mat> channels;
//    split(ycrcb, channels);
//    equalizeHist(channels[0], channels[0]); // 均衡化Y通道
//
//    // 合并通道并转回BGR
//    merge(channels, ycrcb);
//    cvtColor(ycrcb, dst, COLOR_YCrCb2BGR);
//}
//
//// CLAHE（限制对比度自适应直方图均衡化）
//void claheEqualization(const Mat& src, Mat& dst) {
//    Mat gray;
//    cvtColor(src, gray, COLOR_BGR2GRAY);
//
//    // 创建CLAHE对象，设置限制对比度和网格大小
//    Ptr<CLAHE> clahe = createCLAHE(2.0, Size(8, 8)); // 对比度限制为2.0，8x8网格
//    clahe->apply(gray, dst); // 应用CLAHE
//}
//
//int main() {
//    // 读取图像
//    Mat src = imread("test.jpg");
//    if (src.empty()) {
//        cout << "无法读取图像！" << endl;
//        return -1;
//    }
//
//    // 三种均衡化处理
//    Mat gray_eq, color_eq, clahe_eq;
//    grayEqualization(src, gray_eq);
//    colorEqualization(src, color_eq);
//    claheEqualization(src, clahe_eq);
//
//    // 显示结果
//    imshow("原图", src);
//    imshow("灰度图全局均衡化", gray_eq);
//    imshow("彩色图均衡化（Y通道）", color_eq);
//    imshow("CLAHE（限制对比度自适应均衡化）", clahe_eq);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
