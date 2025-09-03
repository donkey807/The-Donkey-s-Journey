//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Change_Photo(Mat& image);
//};
//
//Mat src, dst;
//// �������
//int lightness = 100;
//const int Max_lightness = 200;
//// �Աȶ����
//int contrast = 100;
//const int Max_contrast = 200;
//
//
//// �ص�����������λ�ñ仯ʱ����
//static void on_trackbar(int, void* userdata)
//{
//    // �������ȵ���ֵ (-100 �� 100)
//    int brightness_offset = lightness - 100;
//
//    // ����Աȶȵ���ϵ�� (0 �� 2.0)
//    double contrast_gain = contrast / 100.0;
//
//    // Ӧ�����ȺͶԱȶȵ���
//    // ��ʽ: dst = src * contrast_gain + brightness_offset
//    src.convertTo(dst, -1, contrast_gain, brightness_offset);
//   
//
//    imshow("�ԱȶȺ����ȵ���", dst);
//}
//
//// ����ͼ������ȺͶԱȶ�
//void QuickDemo::Change_Photo(Mat& image)
//{
//    // ����ԭʼͼ��
//    src = image;
//
//    // ����ͼ�񴰿�
//    namedWindow("�ԱȶȺ����ȵ���", WINDOW_AUTOSIZE);
//
//    // �������Ȼ�����
//    createTrackbar("���ȵ��ڣ�", "�ԱȶȺ����ȵ���",
//        &lightness, Max_lightness, on_trackbar);
//
//    // �����ԱȶȻ�����
//    createTrackbar("�Աȶȵ��ڣ�", "�ԱȶȺ����ȵ���",
//        &contrast, Max_contrast, on_trackbar);
//
//    // ��ʼ����ʾ
//    on_trackbar(0, nullptr);
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
//    qd.Change_Photo(image);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
