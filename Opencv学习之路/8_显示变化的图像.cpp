//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Change_Color(Mat& image);
//};
//
//
//Mat src;
//
//
//static void clear_Windows(void)
//{
//    destroyWindow("灰度图像：");
//    destroyWindow("HSV图像：");
//    
//}
//// 调整图像的亮度、对比度并处理按键控制
//void QuickDemo::Change_Color(Mat& image)
//{
//    // 保存原始图像
//    src = image;
//    int map[] =
//    {
//    COLORMAP_AUTUMN,
//    COLORMAP_BONE,
//    COLORMAP_JET ,
//    COLORMAP_WINTER,
//    COLORMAP_RAINBOW,
//    COLORMAP_OCEAN ,
//    COLORMAP_SUMMER ,
//    COLORMAP_SPRING ,
//    COLORMAP_COOL ,
//    COLORMAP_HSV ,
//    COLORMAP_PINK ,
//    COLORMAP_HOT ,
//    COLORMAP_PARULA ,
//    COLORMAP_MAGMA ,
//    COLORMAP_INFERNO ,
//    COLORMAP_PLASMA ,
//    COLORMAP_VIRIDIS ,
//    COLORMAP_CIVIDIS ,
//    COLORMAP_TWILIGHT ,
//    COLORMAP_TWILIGHT_SHIFTED ,
//    COLORMAP_TURBO ,
//    COLORMAP_DEEPGREEN
//    };
//    // 创建图像窗口
//    namedWindow("对比度和亮度调节", WINDOW_AUTOSIZE);
//
//    int i = 0;
//    while (true)
//    {
//        int c = waitKey(10); // 等待10ms，给滑动条事件处理机会
//        if (c == 27) // ESC键退出
//        {
//            break;
//        }
//       
//            applyColorMap(image, src, map[i%19]);
//           
//            imshow("photo", src);
//            waitKey(1000);
//            destroyAllWindows();
//            i++;
//        
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
//    qd.Change_Color(image); // 现在这个函数同时处理滑动条和按键
//
//    destroyAllWindows();
//    return 0;
//}

//            applyColorMap(image, src, map[i%19]);