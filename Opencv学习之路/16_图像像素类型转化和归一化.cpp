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
//    void norm_demo(Mat& image);
//};
//void QuickDemo::norm_demo(Mat&image)
//{
//    Mat dst;
//    std::cout << image.type() << std::endl;
//	//将image转换为float类型  
//	image.convertTo(image, CV_32F);
//    std::cout << image.type() << std::endl;
//	// 归一化处理输出到dst
//    normalize(image, dst, 1.0,0, NORM_MINMAX);
//	std::cout << dst.type() << std::endl;   
//    //显示图像
//    namedWindow("原始图", WINDOW_AUTOSIZE);
//    imshow("原始图", image);
//
//	namedWindow("归一化处理", WINDOW_AUTOSIZE);
//	imshow("归一化处理", dst);
//    
//
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
//    qd.norm_demo(image );
//    return 0;
//}