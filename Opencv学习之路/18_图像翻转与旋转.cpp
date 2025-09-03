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
//    void flip_demo(Mat& image);
//    void warp_demo(Mat& image);
//};
//void QuickDemo::flip_demo(Mat& image)
//{
//    Mat dst;
//    //翻转图像
//    flip(image,dst,0);//0垂直翻转,1水平翻转，-1水平垂直翻转、
//    //显示原图
//    imshow("显示原图", image);
//    //显示放缩后的图像
//    imshow("放缩后的图像", dst);
//
//
//
//    waitKey(99999);
//    destroyAllWindows();
//}
//void QuickDemo::warp_demo(Mat& image)
//{
//    Mat dst;
//    //翻转图像
//	warpAffine(image, dst, getRotationMatrix2D(Point2f(image.cols / 2, image.rows / 2), 45, 1), Size(image.cols, image.rows));  
//   /* getRotationMatrix2D(center, angle, scale)
//    center（旋转中心）：
//    Point2f(image.cols / 2, image.rows / 2) 表示以图像的中心为旋转轴（cols 是图像宽度，rows 是图像高度）。
//    例如：宽 600、高 400 的图像，旋转中心是(300, 200)。
//    angle（旋转角度）：
//    这里是 45，表示顺时针旋转 45 度（注意：OpenCV 中角度为正数时是顺时针旋转，负数时是逆时针旋转）。
//    scale（缩放因子）：
//    这里是 1，表示旋转后图像尺寸不缩放（若设为 0.5 则旋转后缩小到原来的 50 % ）。*/
//    
//    //显示原图
//    imshow("显示原图", image);
//    //显示放缩后的图像
//    imshow("放缩后的图像", dst);
//
//    waitKey(99999);
//    destroyAllWindows();
//}
//int main()
//{
//    Mat image = imread("F:\\下载\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    int key = 0;
//    if (image.empty())
//    {
//        cout << "无法读取图像文件！" << endl;
//        return -1;
//    }
//
//
//    cin >> key;
//    QuickDemo qd;
//    if (key == 1)
//    {
//        qd.flip_demo(image);
//    }
//    if (key == 2)
//    {
//        qd.warp_demo(image);
//    }
//
//
//  
//
//
//    system("pause");
//    return 0;
//}