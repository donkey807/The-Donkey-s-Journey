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
//// ����ͼ������ȡ��ԱȶȲ�����������
//void QuickDemo::Operator_bitwise(Mat& image)
//{
//    //������������256������ʾ��ɫ���ؿ�ġ����ڡ��������ڲ�һֱ��С��xy���겻ͬ�⣬�޷����а�λ������
//    Mat m1 = Mat::zeros(Size(256, 256), CV_8UC3);
//    Mat m2 = Mat::zeros(Size(256, 256), CV_8UC3);
//    Mat dst_and,dst_or,dst_not;
//
//    //(x,y)=��100,100��;long = 80,width = 80;-1����ͼ��+1Ϊ���ͼ��
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
//    Mat image = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.Operator_bitwise(image); // �����������ͬʱ���������Ͱ���
//
//    return 0;
//}


//bitwise_and bitwise_or bitwise_not