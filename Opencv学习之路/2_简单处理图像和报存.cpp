////对图像进行简单的处理，并显示和保存，cat_hsv.jpg，cat_gray.jpg
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
////对图像进行图像处理
//void QuickDemo::colorSpace_Demo(Mat& image)
//{
//	Mat gray, hsv, ret;
//	ret = image;//报存当前状态
//	cvtColor(image, hsv, COLOR_BGR2HSV);
//	cvtColor(ret, gray, COLOR_BGR2GRAY);
//
//	imshow("HSV", hsv);
//	imshow("GRAY", gray);
//
//	imwrite("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat_hsv.jpg", hsv);
//	waitKey(10000);
//	destroyAllWindows();
//
//	imwrite("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat_gray.jpg", gray);
//	waitKey(10000);
//	destroyAllWindows();
//
//}
//
//
//int main(int argc, char** argv)
//{
//	//读取图像
//	Mat img = imread("C:\\Users\\刘庆凯\\source\\repos\\OpenCV__Project\\cat.jpg");
//	if (img.empty())
//	{
//		printf("读取图像失败！");
//		return -1;
//	}
//
//	//创建窗口，使图像大小和显示器匹配
//	namedWindow("输入窗口", WINDOW_FREERATIO);
//	//显示图片
//	imshow("input", img);
//
//	QuickDemo qd;
//	qd.colorSpace_Demo(img);
//
//	//显示时间
//	waitKey(10000);
//	//waitKey时间到达后，摧毁图像窗口
//	destroyAllWindows();
//	return 0;
//}
//
////cv::imwrite
////cv::cvtColor
////cv::imshow仅支持256位数据显示，或着浮点数显示（其他都会有一定的问题）
//
//
////H（Hue，色相）：
////表示颜色的种类（如红、绿、蓝等），在 OpenCV 中取值范围是 0 - 179（而非 0 - 180，注意是闭区间）。不同数值对应不同颜色，例如：0 - 10 对应红色，45 - 75 对应绿色，100 - 130 对应蓝色等。
////S（Saturation，饱和度）：
////表示颜色的鲜艳程度，取值范围 0 - 255。数值越高，颜色越纯（如纯红）；数值越低，颜色越接近灰色（0 时为纯灰色）。
////V（Value，明度）：
////表示颜色的明暗程度，取值范围 0 - 255。数值越高，颜色越亮（255 时接近白色）；数值越低，颜色越暗（0 时为纯黑色）。