//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <cmath>
//#define M_PI 3.1415
//using namespace cv;
//using namespace std;
//
//// �ֶ�������˹��
//Mat createGaussianKernel(int ksize, double sigma) {
//    // ȷ���˴�СΪ����
//    if (ksize % 2 == 0) ksize++;
//
//    Mat kernel(ksize, ksize, CV_64F);
//    int center = ksize / 2;
//    double sum = 0.0;
//    double sigma2 = 2 * sigma * sigma;
//    double sigmaPI = M_PI * sigma2;
//
//    // �����˹��ÿ��λ�õ�ֵ
//    for (int i = 0; i < ksize; i++) {
//        for (int j = 0; j < ksize; j++) {
//            int x = i - center;
//            int y = j - center;
//            // ��ά��˹����
//            kernel.at<double>(i, j) = exp(-(x * x + y * y) / sigma2) / sigmaPI;
//            sum += kernel.at<double>(i, j);
//        }
//    }
//
//    // ��һ���ˣ�ȷ������Ԫ��֮��Ϊ1������ͼ�����ȱ仯��
//    kernel /= sum;
//    return kernel;
//}
//
//// �ֶ�ʵ�ָ�˹�˲������ھ����
//Mat gaussianFilterManual(Mat& src, int ksize, double sigma) {
//    Mat gray;
//    if (src.channels() == 3) {
//        cvtColor(src, gray, COLOR_BGR2GRAY);
//    }
//    else {
//        gray = src.clone();
//    }
//
//    // ������˹��
//    Mat kernel = createGaussianKernel(ksize, sigma);
//
//    // ʹ�þ��ʵ���˲�������֮ǰ�ľ��������
//    Mat dst;
//    filter2D(gray, dst, -1, kernel);
//    return dst;
//}
//
//// ʹ��OpenCV���ø�˹�˲�����
//Mat gaussianFilterBuiltIn(Mat& src, int ksize, double sigma) {
//    Mat dst;
//    // ���ú�����֧�ֲ�ɫͼֱ�Ӵ����Զ�����߽�
//    GaussianBlur(src, dst, Size(ksize, ksize), sigma, sigma);
//    return dst;
//}
//
//int main() {
//    // ��ȡͼ��
//    Mat src = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (src.empty()) {
//        cout << "�޷���ȡͼ��" << endl;
//        return -1;
//    }
//
//    // �˲��������˴�С����3/5/7��sigma>0��
//    int ksize = 5;    // ��˹�˴�С��������
//    double sigma = 1.0; // ��˹��׼�Խ��Խģ����
//
//    // ���ַ�ʽʵ�ָ�˹�˲�
//    Mat manual_dst = gaussianFilterManual(src, ksize, sigma);
//    Mat builtin_dst = gaussianFilterBuiltIn(src, ksize, sigma);
//
//    // ��ʾ���
//    imshow("ԭͼ", src);
//    imshow("�ֶ�ʵ�ָ�˹�˲����Ҷȣ�", manual_dst);
//    imshow("OpenCV���ø�˹�˲�����ɫ��", builtin_dst);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
