//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//class QuickDemo
//{
//public:
//	void Change_photo(Mat& image);
//};
////通过获取图像的行列和通道数，并对这些值改变在输出图像
//void QuickDemo::Change_photo(Mat& image)
//{
//	//获取图像行列，和通道数
//	int c = image.cols;//列
//	int r = image.rows;//行
//	int dims = image.channels();
//	//双遍历展开图像矩阵
//	//for (int i = 0; i < r; i++)
//	//{
//	//	for (int j = 0; j < c; j++)
//	//	{
//	//		if (dims == 1)//单通道，灰度图像
//	//		{
//	//			int pv = image.at<uchar>(i,j);//用于访问矩阵中指定位置的元素
//	//			image.at<uchar>(i, j) = 255 - pv;//对该位置元素的颜色进行处理
//	//		}
//	//		if (dims == 3)//三通道，彩色图像
//	//		{
//	//			Vec3b rev = image.at<Vec3b>(i, j);//Vec3b视作数组存储RGB三个数据内容
//	//			image.at<Vec3b>(i, j)[0] = 255 - rev[0];
//	//			image.at<Vec3b>(i, j)[1] = 255 - rev[1];
//	//			image.at<Vec3b>(i, j)[2] = 255 - rev[2];
//	//		}
//	//	}
//	//}
//
//	//指针
//	for (int i = 0; i < r; i++)
//	{
//		uchar* current_row = image.ptr<uchar>(i);//获取当前行数
//		for (int j = 0; j < c; j++)
//		{
//			if (dims == 1)//单通道，灰度图像
//			{
//				int pv = *current_row;//用于访问矩阵中指定位置的元素
//				*current_row++ = 255 - pv;
//			}
//			if (dims == 3)//三通道，彩色图像
//			{
//				//Vec3b rev = image.at<Vec3b>(i, j);//Vec3b视作数组存储RGB三个数据内容
//				*current_row++ = 255 - *current_row;
//				*current_row++ = 255 - *current_row;
//				*current_row++ = 255 - *current_row;
//			}
//		}
//	}
//
//
//	imshow("照片改变后显示为", image);
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
//	qd.Change_photo(image);
//
//
//	waitKey(10000);
//	destroyAllWindows();
//	return 0;
//}