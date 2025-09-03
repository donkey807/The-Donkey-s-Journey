//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main() {
//    // ��ȡͼ��ת��ΪHSV�ռ�
//    Mat src = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (src.empty()) {
//        cout << "�޷���ȡͼ��" << endl;
//        return -1;
//    }
//    Mat hsv;
//    cvtColor(src, hsv, COLOR_BGR2HSV);
//
//    // �����άֱ��ͼ�Ĳ���
//    int h_bins = 50;  // Hͨ����bins����
//    int s_bins = 60;  // Sͨ����bins����
//    int histSize[] = { h_bins, s_bins };
//
//    // Hͨ���ķ�Χ��0~179����Sͨ���ķ�Χ��0~255��
//    float h_ranges[] = { 0, 180 };
//    float s_ranges[] = { 0, 256 };
//
//
//    /*ranges �����˱��� �������С������ H ���� 0~179��S ���� 0~255����
//    bins �����˱��� ����Ԫ������������ 50 �� ��60 �е����񣩡�
//    ÿ����Ԫ��bin������ֵ = ����� H �����Ҹ� S ���������������*/
//
//
//    const float* ranges[] = { h_ranges, s_ranges };
//
//    // ѡ��Ҫͳ�Ƶ�ͨ����HΪ0ͨ����SΪ1ͨ����
//    int channels[] = { 0, 1 };
//
//    // �����άֱ��ͼ
//    Mat hist;
//    calcHist(&hsv, 1, channels, Mat(), hist, 2, histSize, ranges, true, false);
//
//    // ��һ��������ֵ���ŵ�0~255��������ʾ��
//    normalize(hist, hist, 0, 255, NORM_MINMAX, -1, Mat());
//
//    // ����������ʾ��ͼ��
//    int hist_w = 500;  // ֱ��ͼ���
//    int hist_h = 600;  // ֱ��ͼ�߶�
//    int h_bin_w = cvRound((double)hist_w / h_bins);  // ÿ��H bin�Ŀ��
//    int s_bin_h = cvRound((double)hist_h / s_bins);  // ÿ��S bin�ĸ߶�
//    Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
//
//    // ���ƶ�άֱ��ͼ������ɫǿ�ȱ�ʾ����������
//    for (int h = 0; h < h_bins; h++) {
//        for (int s = 0; s < s_bins; s++) {
//            float binVal = hist.at<float>(h, s);  // ��ȡ��bin����������
//            int intensity = cvRound(binVal);      // ת��Ϊ����ֵ
//
//            // ���ƾ��Σ�H��Ӧx�ᣬS��Ӧy�ᣩ
//            rectangle(histImage,
//                Point(h * h_bin_w, s * s_bin_h),
//                Point((h + 1) * h_bin_w, (s + 1) * s_bin_h),
//                Scalar(intensity, intensity, intensity),  // �ûҶȱ�ʾ����
//                -1);  // ������
//        }
//    }
//
//    // ��ʾ���
//    imshow("ԭͼ", src);
//    imshow("H-S��άֱ��ͼ", histImage);
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
