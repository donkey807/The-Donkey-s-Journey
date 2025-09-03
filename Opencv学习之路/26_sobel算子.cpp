#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // 读取图像
    Mat src = imread("G:\\水管堵塞\\数据集\\train\\146.png");  // 替换为你的图像路径
    if (src.empty()) {
        cerr << "无法读取图像！" << endl;
        return -1;
    }

    // 转换为灰度图（Sobel算法通常在单通道图像上操作）
    Mat gray;
    cvtColor(src, gray, COLOR_BGR2GRAY);

    // 定义变量存储Sobel计算结果
    Mat grad_x, grad_y;       // 分别存储x和y方向的梯度
    Mat abs_grad_x, abs_grad_y; // 存储绝对值结果
    Mat grad;                 // 最终的边缘图像

    // Sobel算子参数
    int ddepth = CV_16S;      // 使用16位有符号整数避免计算溢出
    int ksize = 3;            // Sobel核大小（必须是1, 3, 5或7）
    int scale = 1;            // 缩放因子，计算导数值时的缩放系数
    int delta = 0;            // 附加值，计算后添加到结果中的值

    // 计算X方向梯度（水平边缘检测）
    Sobel(gray, grad_x, ddepth, 1, 0, ksize, scale, delta, BORDER_DEFAULT);
    // 计算绝对值并转换为8位
    convertScaleAbs(grad_x, abs_grad_x);

    // 计算Y方向梯度（垂直边缘检测）
    Sobel(gray, grad_y, ddepth, 0, 1, ksize, scale, delta, BORDER_DEFAULT);
    // 计算绝对值并转换为8位
    convertScaleAbs(grad_y, abs_grad_y);

    // 合并X和Y方向的梯度（加权求和）
    addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad);

    // 创建窗口显示结果
    namedWindow("原图", WINDOW_AUTOSIZE);
    namedWindow("X方向边缘", WINDOW_AUTOSIZE);
    namedWindow("Y方向边缘", WINDOW_AUTOSIZE);
    namedWindow("合并边缘", WINDOW_AUTOSIZE);

    // 显示图像
    imshow("原图", src);
    imshow("X方向边缘", abs_grad_x);  // 主要检测垂直方向的边缘
    imshow("Y方向边缘", abs_grad_y);  // 主要检测水平方向的边缘
    imshow("合并边缘", grad);         // 综合水平和垂直边缘

    // 等待按键，然后关闭所有窗口
    waitKey(0);
    destroyAllWindows();

    return 0;
}