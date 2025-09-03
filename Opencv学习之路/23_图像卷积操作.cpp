//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// 自定义卷积操作函数
//Mat convolve(Mat& src, Mat& kernel) {
//    // 确保输入图像是灰度图
//    Mat gray;
//    if (src.channels() == 3) {
//        cvtColor(src, gray, COLOR_BGR2GRAY);
//    }
//    else {
//        gray = src.clone();
//    }
//
//    // 获取图像和卷积核尺寸
//    int img_h = gray.rows;
//    int img_w = gray.cols;
//    int k_h = kernel.rows;
//    int k_w = kernel.cols;
//
//    // 计算卷积核中心（用于padding）
//    int pad_h = k_h / 2;
//    int pad_w = k_w / 2;
//
//    // 为图像添加边界填充（避免边缘像素处理异常）
//    Mat padded;
//    copyMakeBorder(gray, padded, pad_h, pad_h, pad_w, pad_w, BORDER_REPLICATE);
//
//    // 创建输出图像
//    Mat dst = Mat::zeros(gray.size(), CV_32F);
//
//    // 执行卷积操作
//    for (int i = pad_h; i < img_h + pad_h; i++) {
//        for (int j = pad_w; j < img_w + pad_w; j++) {
//            float sum = 0.0;
//            // 卷积核与图像区域相乘累加
//            for (int k = -pad_h; k <= pad_h; k++) {
//                for (int l = -pad_w; l <= pad_w; l++) {
//                    // 获取图像像素值
//                    uchar pixel = padded.at<uchar>(i + k, j + l);
//                    // 获取卷积核权重
//                    float weight = kernel.at<float>(k + pad_h, l + pad_w);
//                    sum += pixel * weight;
//                }
//            }
//            // 存储卷积结果（暂时用32位浮点数避免溢出）
//            dst.at<float>(i - pad_h, j - pad_w) = sum;
//        }
//    }
//
//    // 归一化到0-255范围并转换为8位图像
//    normalize(dst, dst, 0, 255, NORM_MINMAX);
//    //转换数据类型
//    dst.convertTo(dst, CV_8U);
//
//
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
//    // 定义不同的卷积核（可根据需求修改）
//    // 1. 锐化卷积核（增强边缘）
//    Mat sharpen_kernel = (Mat_<float>(3, 3) <<
//        0, -1, 0,
//        -1, 5, -1,
//        0, -1, 0);
//
//    // 2. 模糊卷积核（均值滤波）
//    Mat blur_kernel = (Mat_<float>(3, 3) <<
//        1 / 9.0, 1 / 9.0, 1 / 9.0,
//        1 / 9.0, 1 / 9.0, 1 / 9.0,
//        1 / 9.0, 1 / 9.0, 1 / 9.0);
//
//    // 3. 边缘检测卷积核（Sobel水平边缘）
//    Mat edge_kernel = (Mat_<float>(3, 3) <<
//        -1, -2, -1,
//        0, 0, 0,
//        1, 2, 1);
//
//    // 4. 浮雕效果卷积核
//    Mat emboss_kernel = (Mat_<float>(3, 3) <<
//        -2, -1, 0,
//        -1, 1, 1,
//        0, 1, 2);
//
//    Mat liuqingkai_kernel = (Mat_<float>(3, 3) <<
//        0, -1, 0,
//        -1, 100, -1,
//        0, -1, 0);
//
//
//
//
//    // 执行卷积操作
//    Mat sharpen_dst = convolve(src, sharpen_kernel);
//    Mat blur_dst = convolve(src, blur_kernel);
//    Mat edge_dst = convolve(src, edge_kernel);
//    Mat emboss_dst = convolve(src, emboss_kernel);
//    Mat liuqingkai_dst = convolve(src, liuqingkai_kernel);
//
//    // 显示结果
//    imshow("原图", src);
//    imshow("锐化效果", sharpen_dst);
//    imshow("模糊效果", blur_dst);
//    imshow("边缘检测", edge_dst);
//    imshow("浮雕效果", emboss_dst);
//    imshow("刘庆凯效果", liuqingkai_dst);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
