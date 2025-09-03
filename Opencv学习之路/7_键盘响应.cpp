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
//static void on_trackbar(int, void*)
//{
//    // 计算亮度调整值 (-100 到 100)
//    int brightness_offset = lightness - 100;
//
//    // 计算对比度调整系数 (0 到 2.0)
//    double contrast_gain = contrast / 100.0;
//
//    // 应用亮度和对比度调整
//    src.convertTo(dst, -1, contrast_gain, brightness_offset);
//    imshow("对比度和亮度调节", dst);
//}
//static void clear_Windows(void)
//{
//    destroyWindow("灰度图像：");
//    destroyWindow("HSV图像：");
//    
//}
//// 调整图像的亮度、对比度并处理按键控制
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
//
//    // 合并按键控制逻辑到同一个事件循环
//    cout << "按键说明:" << endl;
//    cout << "1: 按下1键,灰度图像" << endl;
//    cout << "2: 按下2键，HSV图像" << endl;
//    cout << "3: 按下3键" << endl;
//    cout << "ESC: 退出程序" << endl;
//
//    while (true)
//    {
//        int c = waitKey(10); // 等待10ms，给滑动条事件处理机会
//        if (c == 27) // ESC键退出
//        {
//            break;
//        }
//        else if (c == 49) // 1键
//        {
//            cout << "enter Key 1" << endl;
//            clear_Windows();
//            cvtColor(image, dst, COLOR_BGR2GRAY);
//            imshow("灰度图像：", dst);
//            
//        }
//        else if (c == 50) // 2键
//        {
//            cout << "enter Key 2" << endl;
//            clear_Windows();
//            cvtColor(image, dst, COLOR_BGR2HSV);
//            imshow("HSV图像：", dst);
//
//        }
//        else if (c == 51) // 3键
//        {
//            cout << "enter Key 3" << endl;
//        }
//    }
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
//    qd.Change_Photo(image); // 现在这个函数同时处理滑动条和按键
//
//    destroyAllWindows();
//    return 0;