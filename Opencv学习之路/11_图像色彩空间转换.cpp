//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void pixel_statistic(Mat& image);
//};
//
//
//void QuickDemo::pixel_statistic(Mat& image)
//{
//
//    // 对于彩色图像，需要先转换为灰度图才能获取最值位置
//    Mat gray;
//    cvtColor(image, gray, COLOR_BGR2GRAY);
//    Point min_p, max_p;
//    double min_d, max_d; // 修改为 double 类型以匹配 minMaxLoc 的参数要求
//    minMaxLoc(gray, &min_d, &max_d, &min_p, &max_p); // 调整参数顺序以符合函数签名
//
//    cout << "最小值: " << min_d << " 位置: " << min_p << endl;
//    cout << "最大值: " << max_d << " 位置: " << max_p << endl;
//    Mat mean, stddev;
//    //mean是均值；stddev是标准差（该函数也适用于多通道）
//    meanStdDev(image,mean,stddev);
//    cout << "mean" << mean << "stddev" << stddev << endl;
//
//
//}
//   
//
//    
//
//
//int main()
//{
//    Mat image = imread("F:\\下载\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "无法读取图像文件！" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.pixel_statistic(image); // 现在这个函数同时处理滑动条和按键
//
//    return 0;
//}