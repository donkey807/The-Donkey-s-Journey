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
//static void on_trackbar(int, void*)
//{
//    // �������ȵ���ֵ (-100 �� 100)
//    int brightness_offset = lightness - 100;
//
//    // ����Աȶȵ���ϵ�� (0 �� 2.0)
//    double contrast_gain = contrast / 100.0;
//
//    // Ӧ�����ȺͶԱȶȵ���
//    src.convertTo(dst, -1, contrast_gain, brightness_offset);
//    imshow("�ԱȶȺ����ȵ���", dst);
//}
//static void clear_Windows(void)
//{
//    destroyWindow("�Ҷ�ͼ��");
//    destroyWindow("HSVͼ��");
//    
//}
//// ����ͼ������ȡ��ԱȶȲ�����������
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
//
//    // �ϲ����������߼���ͬһ���¼�ѭ��
//    cout << "����˵��:" << endl;
//    cout << "1: ����1��,�Ҷ�ͼ��" << endl;
//    cout << "2: ����2����HSVͼ��" << endl;
//    cout << "3: ����3��" << endl;
//    cout << "ESC: �˳�����" << endl;
//
//    while (true)
//    {
//        int c = waitKey(10); // �ȴ�10ms�����������¼��������
//        if (c == 27) // ESC���˳�
//        {
//            break;
//        }
//        else if (c == 49) // 1��
//        {
//            cout << "enter Key 1" << endl;
//            clear_Windows();
//            cvtColor(image, dst, COLOR_BGR2GRAY);
//            imshow("�Ҷ�ͼ��", dst);
//            
//        }
//        else if (c == 50) // 2��
//        {
//            cout << "enter Key 2" << endl;
//            clear_Windows();
//            cvtColor(image, dst, COLOR_BGR2HSV);
//            imshow("HSVͼ��", dst);
//
//        }
//        else if (c == 51) // 3��
//        {
//            cout << "enter Key 3" << endl;
//        }
//    }
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
//    qd.Change_Photo(image); // �����������ͬʱ���������Ͱ���
//
//    destroyAllWindows();
//    return 0;