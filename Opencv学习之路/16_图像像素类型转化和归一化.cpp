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
//	//��imageת��Ϊfloat����  
//	image.convertTo(image, CV_32F);
//    std::cout << image.type() << std::endl;
//	// ��һ�����������dst
//    normalize(image, dst, 1.0,0, NORM_MINMAX);
//	std::cout << dst.type() << std::endl;   
//    //��ʾͼ��
//    namedWindow("ԭʼͼ", WINDOW_AUTOSIZE);
//    imshow("ԭʼͼ", image);
//
//	namedWindow("��һ������", WINDOW_AUTOSIZE);
//	imshow("��һ������", dst);
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
//    Mat image = imread("F:\\����\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.norm_demo(image );
//    return 0;
//}