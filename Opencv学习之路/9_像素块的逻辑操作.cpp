//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Operator_bitwise(Mat& image);
//};
//
//
//
//
//
//// 调整图像的亮度、对比度并处理按键控制
//void QuickDemo::Operator_bitwise(Mat& image)
//{
//    //定义两个长宽256，能显示彩色像素块的“窗口”（若窗口不一直大小，xy坐标不同意，无法进行按位操作）
//    Mat m1 = Mat::zeros(Size(256, 256), CV_8UC3);
//    Mat m2 = Mat::zeros(Size(256, 256), CV_8UC3);
//    Mat dst_and,dst_or,dst_not;
//
//    //(x,y)=（100,100）;long = 80,width = 80;-1生成图像+1为填充图像
//    rectangle(m1, Rect(100, 100, 80, 80), Scalar(255,100,100), -1);
//    rectangle(m2, Rect(100, 100, 80, 80), Scalar(0, 255, 0), -1);
//    imshow("m1", m1);
//    imshow("m2", m2);
//   
//    bitwise_and(m1,m2,dst_and);
//    imshow("dst_and",dst_and);
//    bitwise_or(m1,m2,dst_or);
//    imshow("dst_or", dst_or);
//    bitwise_not(image,dst_not);
//    imshow("dst_not", dst_not);
//
//    waitKey(30000);
//    destroyAllWindows();
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
//    qd.Operator_bitwise(image); // 现在这个函数同时处理滑动条和按键
//
//    return 0;
//}


//bitwise_and bitwise_or bitwise_not