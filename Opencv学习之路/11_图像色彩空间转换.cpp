//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void pixel_statistic(Mat& image);
//};
//
//
//void QuickDemo::pixel_statistic(Mat& image)
//{
//
//    // ���ڲ�ɫͼ����Ҫ��ת��Ϊ�Ҷ�ͼ���ܻ�ȡ��ֵλ��
//    Mat gray;
//    cvtColor(image, gray, COLOR_BGR2GRAY);
//    Point min_p, max_p;
//    double min_d, max_d; // �޸�Ϊ double ������ƥ�� minMaxLoc �Ĳ���Ҫ��
//    minMaxLoc(gray, &min_d, &max_d, &min_p, &max_p); // ��������˳���Է��Ϻ���ǩ��
//
//    cout << "��Сֵ: " << min_d << " λ��: " << min_p << endl;
//    cout << "���ֵ: " << max_d << " λ��: " << max_p << endl;
//    Mat mean, stddev;
//    //mean�Ǿ�ֵ��stddev�Ǳ�׼��ú���Ҳ�����ڶ�ͨ����
//    meanStdDev(image,mean,stddev);
//    cout << "mean" << mean << "stddev" << stddev << endl;
//
//
//}
//   
//
//    
//
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
//    qd.pixel_statistic(image); // �����������ͬʱ���������Ͱ���
//
//    return 0;
//}