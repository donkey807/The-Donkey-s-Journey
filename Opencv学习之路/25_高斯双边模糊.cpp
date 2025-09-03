//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main() {
//    // ��ȡͼ��
//    Mat src = imread("input_image.jpg");  // �滻Ϊ���ͼ��·��
//    if (src.empty()) {
//        cerr << "�޷���ȡͼ������·���Ƿ���ȷ��" << endl;
//        return -1;
//    }
//
//    // ��������洢˫���˲����
//    Mat bilateral_result;
//
//    // ��˹˫��ģ������
//    int d = 15;               // ��������ֱ����Խ�������Խ��
//    double sigmaColor = 75;   // ��ɫ�ռ��׼�Խ�����������ɫ�����
//    double sigmaSpace = 75;   // ����ռ��׼�Խ��ģ����ΧԽ��
//
//    // ִ�и�˹˫��ģ��
//    bilateralFilter(src, bilateral_result, d, sigmaColor, sigmaSpace);
//
//    // Ϊ�˶Աȣ�ͬʱ������ͨ��˹ģ��
//    Mat gaussian_result;
//    GaussianBlur(src, gaussian_result, Size(15, 15), 75);
//
//    // ����������ʾ���
//    namedWindow("ԭͼ", WINDOW_AUTOSIZE);
//    namedWindow("��˹˫��ģ��", WINDOW_AUTOSIZE);
//    namedWindow("��ͨ��˹ģ��", WINDOW_AUTOSIZE);
//
//    // ��ʾͼ��
//    imshow("ԭͼ", src);
//    imshow("��˹˫��ģ��", bilateral_result);
//    imshow("��ͨ��˹ģ��", gaussian_result);
//
//    // �ȴ�������Ȼ�󱣴������رմ���
//    waitKey(0);
//    imwrite("bilateral_result.jpg", bilateral_result);
//    imwrite("gaussian_result.jpg", gaussian_result);
//    destroyAllWindows();
//
//    return 0;
//}