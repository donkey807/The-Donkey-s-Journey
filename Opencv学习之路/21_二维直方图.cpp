//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main() {
//    // 读取图像并转换为HSV空间
//    Mat src = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (src.empty()) {
//        cout << "无法读取图像！" << endl;
//        return -1;
//    }
//    Mat hsv;
//    cvtColor(src, hsv, COLOR_BGR2HSV);
//
//    // 定义二维直方图的参数
//    int h_bins = 50;  // H通道的bins数量
//    int s_bins = 60;  // S通道的bins数量
//    int histSize[] = { h_bins, s_bins };
//
//    // H通道的范围（0~179），S通道的范围（0~255）
//    float h_ranges[] = { 0, 180 };
//    float s_ranges[] = { 0, 256 };
//
//
//    /*ranges 决定了表格的 “整体大小”（如 H 方向 0~179，S 方向 0~255）。
//    bins 决定了表格的 “单元格数量”（如 50 列 ×60 行的网格）。
//    每个单元格（bin）的数值 = 落入该 H 区间且该 S 区间的像素总数。*/
//
//
//    const float* ranges[] = { h_ranges, s_ranges };
//
//    // 选择要统计的通道（H为0通道，S为1通道）
//    int channels[] = { 0, 1 };
//
//    // 计算二维直方图
//    Mat hist;
//    calcHist(&hsv, 1, channels, Mat(), hist, 2, histSize, ranges, true, false);
//
//    // 归一化：将数值缩放到0~255（便于显示）
//    normalize(hist, hist, 0, 255, NORM_MINMAX, -1, Mat());
//
//    // 创建用于显示的图像
//    int hist_w = 500;  // 直方图宽度
//    int hist_h = 600;  // 直方图高度
//    int h_bin_w = cvRound((double)hist_w / h_bins);  // 每个H bin的宽度
//    int s_bin_h = cvRound((double)hist_h / s_bins);  // 每个S bin的高度
//    Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
//
//    // 绘制二维直方图（用颜色强度表示像素数量）
//    for (int h = 0; h < h_bins; h++) {
//        for (int s = 0; s < s_bins; s++) {
//            float binVal = hist.at<float>(h, s);  // 获取该bin的像素数量
//            int intensity = cvRound(binVal);      // 转换为亮度值
//
//            // 绘制矩形（H对应x轴，S对应y轴）
//            rectangle(histImage,
//                Point(h * h_bin_w, s * s_bin_h),
//                Point((h + 1) * h_bin_w, (s + 1) * s_bin_h),
//                Scalar(intensity, intensity, intensity),  // 用灰度表示数量
//                -1);  // 填充矩形
//        }
//    }
//
//    // 显示结果
//    imshow("原图", src);
//    imshow("H-S二维直方图", histImage);
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
