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
//    //��תͼ��
//    flip(image,dst,0);//0��ֱ��ת,1ˮƽ��ת��-1ˮƽ��ֱ��ת��
//    //��ʾԭͼ
//    imshow("��ʾԭͼ", image);
//    //��ʾ�������ͼ��
//    imshow("�������ͼ��", dst);
//
//
//
//    waitKey(99999);
//    destroyAllWindows();
//}
//void QuickDemo::warp_demo(Mat& image)
//{
//    Mat dst;
//    //��תͼ��
//	warpAffine(image, dst, getRotationMatrix2D(Point2f(image.cols / 2, image.rows / 2), 45, 1), Size(image.cols, image.rows));  
//   /* getRotationMatrix2D(center, angle, scale)
//    center����ת���ģ���
//    Point2f(image.cols / 2, image.rows / 2) ��ʾ��ͼ�������Ϊ��ת�ᣨcols ��ͼ���ȣ�rows ��ͼ��߶ȣ���
//    ���磺�� 600���� 400 ��ͼ����ת������(300, 200)��
//    angle����ת�Ƕȣ���
//    ������ 45����ʾ˳ʱ����ת 45 �ȣ�ע�⣺OpenCV �нǶ�Ϊ����ʱ��˳ʱ����ת������ʱ����ʱ����ת����
//    scale���������ӣ���
//    ������ 1����ʾ��ת��ͼ��ߴ粻���ţ�����Ϊ 0.5 ����ת����С��ԭ���� 50 % ����*/
//    
//    //��ʾԭͼ
//    imshow("��ʾԭͼ", image);
//    //��ʾ�������ͼ��
//    imshow("�������ͼ��", dst);
//
//    waitKey(99999);
//    destroyAllWindows();
//}
//int main()
//{
//    Mat image = imread("F:\\����\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    int key = 0;
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
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