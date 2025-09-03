//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//class QuickDemo
//{
//public:
//	void Operator_Mat(Mat& image);
//};
////加减乘除改变图像的亮度
//void QuickDemo::Operator_Mat(Mat& image)
//{
//	//获取图像行列，和通道数
//	int col = image.cols;//列
//	int row = image.rows;//行
//	int dims = image.channels();
//	
//	//Mat m1 = Mat::zeros(col, row, CV_8UC3);//创建和image相同大小的图像
//	Mat Operator_result = Mat::zeros(image.size(), image.type());
//	Mat m = Mat::zeros(image.size(), image.type());
//	m = Scalar(10, 10, 10);
//	
//
//	add(image, m, Operator_result);
//	imshow("加法结果为：", Operator_result);
//	
//	subtract(image, m, Operator_result);
//	imshow("减法结果为：", Operator_result);
//
//	divide(image, m, Operator_result);
//	imshow("除法结果为：", Operator_result);
//
//	multiply(image, m, Operator_result);
//	imshow("乘法结果为：", Operator_result);
//
//
//	//双遍历展开图像矩阵
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			//获取每行列的像素值
//			Vec3b p1 = image.at<Vec3b>(i, j);
//			Vec3b p2 = m.at<Vec3b>(i, j);
//			//确保结果符合0-225
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
//	Mat image = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg");
//	imshow("输入照片显示为", image);
//
//	QuickDemo qd;
//	qd.Operator_Mat(image);
//	waitKey(10000);
//	destroyAllWindows();
//	return 0;
//}