//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//class QuickDemo
//{
//public:
//	void Change_photo(Mat& image);
//};
////ͨ����ȡͼ������к�ͨ������������Щֵ�ı������ͼ��
//void QuickDemo::Change_photo(Mat& image)
//{
//	//��ȡͼ�����У���ͨ����
//	int c = image.cols;//��
//	int r = image.rows;//��
//	int dims = image.channels();
//	//˫����չ��ͼ�����
//	//for (int i = 0; i < r; i++)
//	//{
//	//	for (int j = 0; j < c; j++)
//	//	{
//	//		if (dims == 1)//��ͨ�����Ҷ�ͼ��
//	//		{
//	//			int pv = image.at<uchar>(i,j);//���ڷ��ʾ�����ָ��λ�õ�Ԫ��
//	//			image.at<uchar>(i, j) = 255 - pv;//�Ը�λ��Ԫ�ص���ɫ���д���
//	//		}
//	//		if (dims == 3)//��ͨ������ɫͼ��
//	//		{
//	//			Vec3b rev = image.at<Vec3b>(i, j);//Vec3b��������洢RGB������������
//	//			image.at<Vec3b>(i, j)[0] = 255 - rev[0];
//	//			image.at<Vec3b>(i, j)[1] = 255 - rev[1];
//	//			image.at<Vec3b>(i, j)[2] = 255 - rev[2];
//	//		}
//	//	}
//	//}
//
//	//ָ��
//	for (int i = 0; i < r; i++)
//	{
//		uchar* current_row = image.ptr<uchar>(i);//��ȡ��ǰ����
//		for (int j = 0; j < c; j++)
//		{
//			if (dims == 1)//��ͨ�����Ҷ�ͼ��
//			{
//				int pv = *current_row;//���ڷ��ʾ�����ָ��λ�õ�Ԫ��
//				*current_row++ = 255 - pv;
//			}
//			if (dims == 3)//��ͨ������ɫͼ��
//			{
//				//Vec3b rev = image.at<Vec3b>(i, j);//Vec3b��������洢RGB������������
//				*current_row++ = 255 - *current_row;
//				*current_row++ = 255 - *current_row;
//				*current_row++ = 255 - *current_row;
//			}
//		}
//	}
//
//
//	imshow("��Ƭ�ı����ʾΪ", image);
//}
//
//
//
//int main()
//{
//	Mat image = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//	imshow("������Ƭ��ʾΪ", image);
//	
//	QuickDemo qd;
//	qd.Change_photo(image);
//
//
//	waitKey(10000);
//	destroyAllWindows();
//	return 0;
//}