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
//    //����ͼ��
//    resize(image,dst,Size(image.rows, image.cols / 2),0,0,INTER_LINEAR);//Size���ú�fx��fy������Ч
//    //��ʾԭͼ
//    imshow("��ʾԭͼ", image);
//    //��ʾ�������ͼ��
//    imshow("�������ͼ��", dst);
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
//    qd.resize_demo(image);
//    return 0;
//}