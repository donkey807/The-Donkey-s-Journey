//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main() {
//    // 读取图像
//    Mat src = imread("input_image.jpg");  // 替换为你的图像路径
//    if (src.empty()) {
//        cerr << "无法读取图像，请检查路径是否正确！" << endl;
//        return -1;
//    }
//
//    // 定义变量存储双边滤波结果
//    Mat bilateral_result;
//
//    // 高斯双边模糊参数
//    int d = 15;               // 像素邻域直径，越大计算量越大
//    double sigmaColor = 75;   // 颜色空间标准差，越大允许更多颜色被混合
//    double sigmaSpace = 75;   // 坐标空间标准差，越大模糊范围越广
//
//    // 执行高斯双边模糊
//    bilateralFilter(src, bilateral_result, d, sigmaColor, sigmaSpace);
//
//    // 为了对比，同时计算普通高斯模糊
//    Mat gaussian_result;
//    GaussianBlur(src, gaussian_result, Size(15, 15), 75);
//
//    // 创建窗口显示结果
//    namedWindow("原图", WINDOW_AUTOSIZE);
//    namedWindow("高斯双边模糊", WINDOW_AUTOSIZE);
//    namedWindow("普通高斯模糊", WINDOW_AUTOSIZE);
//
//    // 显示图像
//    imshow("原图", src);
//    imshow("高斯双边模糊", bilateral_result);
//    imshow("普通高斯模糊", gaussian_result);
//
//    // 等待按键，然后保存结果并关闭窗口
//    waitKey(0);
//    imwrite("bilateral_result.jpg", bilateral_result);
//    imwrite("gaussian_result.jpg", gaussian_result);
//    destroyAllWindows();
//
//    return 0;
//}