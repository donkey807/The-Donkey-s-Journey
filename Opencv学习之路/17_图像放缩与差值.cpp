//#include <opencv2/opencv.hpp>
//
//#include<vector>
//
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void resize_demo(Mat& image);
//};
//void QuickDemo::resize_demo(Mat& image)
//{
//    Mat dst;
//    //放缩图像
//    resize(image,dst,Size(image.rows, image.cols / 2),0,0,INTER_LINEAR);//Size设置后，fx和fy参数无效
//    //显示原图
//    imshow("显示原图", image);
//    //显示放缩后的图像
//    imshow("放缩后的图像", dst);
//
//
//
//    waitKey(99999);
//    destroyAllWindows();
//
//}
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
//    qd.resize_demo(image);
//    return 0;
//}