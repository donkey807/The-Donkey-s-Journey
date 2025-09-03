//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void drawing_demo(Mat& image);
//};
//
//
//void QuickDemo::drawing_demo(Mat& image)
//{
//    Rect rect;//用于对矩形的绘制typedef Rect_<int> Rect2i;int类型重命名为Rect
//    Mat bg = Mat::zeros(image.size(), image.type());
//    //矩形显示位置坐标
//    rect.x = 100;
//    rect.y = 100;
//    //矩形显示大小
//    rect.height = 300;
//    rect.width = 250;
//    //矩形显示于bg窗口
//    rectangle(bg, rect, Scalar(0, 0, 255), 1, 8, 0);//绘制矩形
//    //圆形显示于bg窗口
//    circle(bg, Point(100,200), 100,Scalar(0, 0, 255), 1, LINE_AA, 0);//绘制圆
//    //直线显示于bg窗口
//    line(bg,Point(300, 200), Point(250, 100), Scalar(0, 0, 255), 1, LINE_AA, 0);//绘制直线
//    //椭圆显示于bg窗口
//    RotatedRect rrt;
//    rrt.center = Point(200, 200);
//    rrt.angle = 180;
//    rrt.size = Size(300, 250);
//    ellipse(bg, rrt, Scalar(0, 255, 255), 2, LINE_AA);//绘制椭圆
//
//    
//    imshow("显示图像", bg);
//    
//    waitKey(99999);
//    destroyAllWindows();
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
//    qd.drawing_demo(image);
//    return 0;
//}