////��ͼ����м򵥵Ĵ�������ʾ�ͱ��棬cat_hsv.jpg��cat_gray.jpg
//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//	void colorSpace_Demo(Mat& image);
//};
////��ͼ�����ͼ����
//void QuickDemo::colorSpace_Demo(Mat& image)
//{
//	Mat gray, hsv, ret;
//	ret = image;//���浱ǰ״̬
//	cvtColor(image, hsv, COLOR_BGR2HSV);
//	cvtColor(ret, gray, COLOR_BGR2GRAY);
//
//	imshow("HSV", hsv);
//	imshow("GRAY", gray);
//
//	imwrite("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat_hsv.jpg", hsv);
//	waitKey(10000);
//	destroyAllWindows();
//
//	imwrite("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat_gray.jpg", gray);
//	waitKey(10000);
//	destroyAllWindows();
//
//}
//
//
//int main(int argc, char** argv)
//{
//	//��ȡͼ��
//	Mat img = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//	if (img.empty())
//	{
//		printf("��ȡͼ��ʧ�ܣ�");
//		return -1;
//	}
//
//	//�������ڣ�ʹͼ���С����ʾ��ƥ��
//	namedWindow("���봰��", WINDOW_FREERATIO);
//	//��ʾͼƬ
//	imshow("input", img);
//
//	QuickDemo qd;
//	qd.colorSpace_Demo(img);
//
//	//��ʾʱ��
//	waitKey(10000);
//	//waitKeyʱ�䵽��󣬴ݻ�ͼ�񴰿�
//	destroyAllWindows();
//	return 0;
//}
//
////cv::imwrite
////cv::cvtColor
////cv::imshow��֧��256λ������ʾ�����Ÿ�������ʾ������������һ�������⣩
//
//
////H��Hue��ɫ�ࣩ��
////��ʾ��ɫ�����ࣨ��졢�̡����ȣ����� OpenCV ��ȡֵ��Χ�� 0 - 179������ 0 - 180��ע���Ǳ����䣩����ͬ��ֵ��Ӧ��ͬ��ɫ�����磺0 - 10 ��Ӧ��ɫ��45 - 75 ��Ӧ��ɫ��100 - 130 ��Ӧ��ɫ�ȡ�
////S��Saturation�����Ͷȣ���
////��ʾ��ɫ�����޳̶ȣ�ȡֵ��Χ 0 - 255����ֵԽ�ߣ���ɫԽ�����紿�죩����ֵԽ�ͣ���ɫԽ�ӽ���ɫ��0 ʱΪ����ɫ����
////V��Value�����ȣ���
////��ʾ��ɫ�������̶ȣ�ȡֵ��Χ 0 - 255����ֵԽ�ߣ���ɫԽ����255 ʱ�ӽ���ɫ������ֵԽ�ͣ���ɫԽ����0 ʱΪ����ɫ����