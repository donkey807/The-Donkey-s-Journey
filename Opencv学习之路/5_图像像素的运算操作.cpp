//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//class QuickDemo
//{
//public:
//	void Operator_Mat(Mat& image);
//};
////�Ӽ��˳��ı�ͼ�������
//void QuickDemo::Operator_Mat(Mat& image)
//{
//	//��ȡͼ�����У���ͨ����
//	int col = image.cols;//��
//	int row = image.rows;//��
//	int dims = image.channels();
//	
//	//Mat m1 = Mat::zeros(col, row, CV_8UC3);//������image��ͬ��С��ͼ��
//	Mat Operator_result = Mat::zeros(image.size(), image.type());
//	Mat m = Mat::zeros(image.size(), image.type());
//	m = Scalar(10, 10, 10);
//	
//
//	add(image, m, Operator_result);
//	imshow("�ӷ����Ϊ��", Operator_result);
//	
//	subtract(image, m, Operator_result);
//	imshow("�������Ϊ��", Operator_result);
//
//	divide(image, m, Operator_result);
//	imshow("�������Ϊ��", Operator_result);
//
//	multiply(image, m, Operator_result);
//	imshow("�˷����Ϊ��", Operator_result);
//
//
//	//˫����չ��ͼ�����
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			//��ȡÿ���е�����ֵ
//			Vec3b p1 = image.at<Vec3b>(i, j);
//			Vec3b p2 = m.at<Vec3b>(i, j);
//			//ȷ���������0-225
//			Operator_result.at<Vec3b>(i, j)[0] = saturate_cast<uchar>(p1[0] + p2[0]);
//			Operator_result.at<Vec3b>(i, j)[1] = saturate_cast<uchar>(p1[0] + p2[1]);
//			Operator_result.at<Vec3b>(i, j)[2] = saturate_cast<uchar>(p1[0] + p2[2]);
//
//		}
//	}
//	
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
//	qd.Operator_Mat(image);
//	waitKey(10000);
//	destroyAllWindows();
//	return 0;
//}