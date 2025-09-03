//����ͼ��Աȶ�
//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// �Ҷ�ͼȫ��ֱ��ͼ���⻯
//void grayEqualization(const Mat& src, Mat& dst) {
//    cvtColor(src, dst, COLOR_BGR2GRAY); // תΪ�Ҷ�ͼ
//    equalizeHist(dst, dst); // ֱ�ӵ���OpenCV�ľ��⻯����
//}
//
//// ��ɫͼֱ��ͼ���⻯����Yͨ����������ɫ�ʣ�
//void colorEqualization(const Mat& src, Mat& dst) {
//    Mat ycrcb;
//    cvtColor(src, ycrcb, COLOR_BGR2YCrCb); // ת����YCrCb�ռ䣨YΪ����ͨ����
//
//    // ����ͨ����ֻ������ͨ�����⻯
//    vector<Mat> channels;
//    split(ycrcb, channels);
//    equalizeHist(channels[0], channels[0]); // ���⻯Yͨ��
//
//    // �ϲ�ͨ����ת��BGR
//    merge(channels, ycrcb);
//    cvtColor(ycrcb, dst, COLOR_YCrCb2BGR);
//}
//
//// CLAHE�����ƶԱȶ�����Ӧֱ��ͼ���⻯��
//void claheEqualization(const Mat& src, Mat& dst) {
//    Mat gray;
//    cvtColor(src, gray, COLOR_BGR2GRAY);
//
//    // ����CLAHE�����������ƶԱȶȺ������С
//    Ptr<CLAHE> clahe = createCLAHE(2.0, Size(8, 8)); // �Աȶ�����Ϊ2.0��8x8����
//    clahe->apply(gray, dst); // Ӧ��CLAHE
//}
//
//int main() {
//    // ��ȡͼ��
//    Mat src = imread("test.jpg");
//    if (src.empty()) {
//        cout << "�޷���ȡͼ��" << endl;
//        return -1;
//    }
//
//    // ���־��⻯����
//    Mat gray_eq, color_eq, clahe_eq;
//    grayEqualization(src, gray_eq);
//    colorEqualization(src, color_eq);
//    claheEqualization(src, clahe_eq);
//
//    // ��ʾ���
//    imshow("ԭͼ", src);
//    imshow("�Ҷ�ͼȫ�־��⻯", gray_eq);
//    imshow("��ɫͼ���⻯��Yͨ����", color_eq);
//    imshow("CLAHE�����ƶԱȶ�����Ӧ���⻯��", clahe_eq);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
