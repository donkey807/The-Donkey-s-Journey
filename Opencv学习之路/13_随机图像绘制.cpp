//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Radom_drawing();
//};
//
//
//void QuickDemo::Radom_drawing()
//{
//    Mat bg = Mat::zeros(Size(1960,960), CV_8UC3);
//    int h = bg.rows;//提取窗口行数
//    int w = bg.cols;//提取窗口列数
//    RNG rng(1);//12345为种子
//    
//
//    while (true)
//    {
//        int c = waitKey(10);
//        if (c == 27)
//        {
//            break;
//        }
//        
//        int x1 = rng.uniform(0, w);
//        int y1 = rng.uniform(0, h);
//        int x2 = rng.uniform(0, w);
//        int y2 = rng.uniform(0, h);
//        int b = rng.uniform(0, 255);
//        int g = rng.uniform(0, 255);
//        int r = rng.uniform(0, 255);
//        
//        bg = Scalar(0, 0, 0);//刷新窗口
//
//        line(bg, Point(x1, y1), Point(x2, y2), Scalar(b, g, r), 1, LINE_AA);
//        
//        imshow("显示图像", bg);
//        
//    }
//    
//
//    imshow("显示图像", bg);
//
//    waitKey(99999);
//    destroyAllWindows();
//
//}





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
//    qd.Radom_drawing();
//    return 0;
//}