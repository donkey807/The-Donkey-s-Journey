#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // ��ȡͼ��
    Mat src = imread("G:\\ˮ�ܶ���\\���ݼ�\\train\\146.png");  // �滻Ϊ���ͼ��·��
    if (src.empty()) {
        cerr << "�޷���ȡͼ��" << endl;
        return -1;
    }

    // ת��Ϊ�Ҷ�ͼ��Sobel�㷨ͨ���ڵ�ͨ��ͼ���ϲ�����
    Mat gray;
    cvtColor(src, gray, COLOR_BGR2GRAY);

    // ��������洢Sobel������
    Mat grad_x, grad_y;       // �ֱ�洢x��y������ݶ�
    Mat abs_grad_x, abs_grad_y; // �洢����ֵ���
    Mat grad;                 // ���յı�Եͼ��

    // Sobel���Ӳ���
    int ddepth = CV_16S;      // ʹ��16λ�з�����������������
    int ksize = 3;            // Sobel�˴�С��������1, 3, 5��7��
    int scale = 1;            // �������ӣ����㵼��ֵʱ������ϵ��
    int delta = 0;            // ����ֵ���������ӵ�����е�ֵ

    // ����X�����ݶȣ�ˮƽ��Ե��⣩
    Sobel(gray, grad_x, ddepth, 1, 0, ksize, scale, delta, BORDER_DEFAULT);
    // �������ֵ��ת��Ϊ8λ
    convertScaleAbs(grad_x, abs_grad_x);

    // ����Y�����ݶȣ���ֱ��Ե��⣩
    Sobel(gray, grad_y, ddepth, 0, 1, ksize, scale, delta, BORDER_DEFAULT);
    // �������ֵ��ת��Ϊ8λ
    convertScaleAbs(grad_y, abs_grad_y);

    // �ϲ�X��Y������ݶȣ���Ȩ��ͣ�
    addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad);

    // ����������ʾ���
    namedWindow("ԭͼ", WINDOW_AUTOSIZE);
    namedWindow("X�����Ե", WINDOW_AUTOSIZE);
    namedWindow("Y�����Ե", WINDOW_AUTOSIZE);
    namedWindow("�ϲ���Ե", WINDOW_AUTOSIZE);

    // ��ʾͼ��
    imshow("ԭͼ", src);
    imshow("X�����Ե", abs_grad_x);  // ��Ҫ��ⴹֱ����ı�Ե
    imshow("Y�����Ե", abs_grad_y);  // ��Ҫ���ˮƽ����ı�Ե
    imshow("�ϲ���Ե", grad);         // �ۺ�ˮƽ�ʹ�ֱ��Ե

    // �ȴ�������Ȼ��ر����д���
    waitKey(0);
    destroyAllWindows();

    return 0;
}