////读取图像和现实图像
//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace std;
//using namespace cv;
//int main(int argc, char** argv)
//{
//	//读取图像
//	Mat img = imread("E:\\OpenCV-4.8\\opencv\\sources\\samples\\dnn\\dnn_model_runner\\dnn_conversion\\paddlepaddle\\data\\cat.jpg");
//	if (img.empty())
//	{
//		printf("读取图像失败！");
//		return -1;
//	}
//	//创建窗口，使图像大小和显示器匹配
//	namedWindow("输入窗口", WINDOW_FREERATIO);
//	//显示图片
//	imshow("input", img);
//	//显示时间
//	waitKey(10000);
//	//waitKey时间到达后，摧毁图像窗口
//	destroyAllWindows();
//	return 0;
//}
//
////img.empty()
////cv::imread()
////cv::imshow()
////cv::waitKey()
////cv::namedWindow()
////cv::waitKey()
////cv::destroyAllWindows()