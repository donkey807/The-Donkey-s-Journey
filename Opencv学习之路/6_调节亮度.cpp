//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Change_Photo(Mat& image);
//};
//
//Mat src, dst;
//// 亮度相关
//int lightness = 100;
//const int Max_lightness = 200;
//// 对比度相关
//int contrast = 100;
//const int Max_contrast = 200;
//
//
//// 回调函数，滑动位置变化时调用
//static void on_trackbar(int, void* userdata)
//{
//    // 计算亮度调整值 (-100 到 100)
//    int brightness_offset = lightness - 100;
//
//    // 计算对比度调整系数 (0 到 2.0)
//    double contrast_gain = contrast / 100.0;
//
//    // 应用亮度和对比度调整
//    // 公式: dst = src * contrast_gain + brightness_offset
//    src.convertTo(dst, -1, contrast_gain, brightness_offset);
//   
//
//    imshow("对比度和亮度调节", dst);
//}
//
//// 调整图像的亮度和对比度
//void QuickDemo::Change_Photo(Mat& image)
//{
//    // 保存原始图像
//    src = image;
//
//    // 创建图像窗口
//    namedWindow("对比度和亮度调节", WINDOW_AUTOSIZE);
//
//    // 创建亮度滑动条
//    createTrackbar("亮度调节：", "对比度和亮度调节",
//        &lightness, Max_lightness, on_trackbar);
//
//    // 创建对比度滑动条
//    createTrackbar("对比度调节：", "对比度和亮度调节",
//        &contrast, Max_contrast, on_trackbar);
//
//    // 初始化显示
//    on_trackbar(0, nullptr);
//}
//
//int main()
//{
//    Mat image = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (image.empty())
//    {
//        cout << "无法读取图像文件！" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.Change_Photo(image);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
