//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//// �Զ�������������
//Mat convolve(Mat& src, Mat& kernel) {
//    // ȷ������ͼ���ǻҶ�ͼ
//    Mat gray;
//    if (src.channels() == 3) {
//        cvtColor(src, gray, COLOR_BGR2GRAY);
//    }
//    else {
//        gray = src.clone();
//    }
//
//    // ��ȡͼ��;���˳ߴ�
//    int img_h = gray.rows;
//    int img_w = gray.cols;
//    int k_h = kernel.rows;
//    int k_w = kernel.cols;
//
//    // �����������ģ�����padding��
//    int pad_h = k_h / 2;
//    int pad_w = k_w / 2;
//
//    // Ϊͼ����ӱ߽���䣨�����Ե���ش����쳣��
//    Mat padded;
//    copyMakeBorder(gray, padded, pad_h, pad_h, pad_w, pad_w, BORDER_REPLICATE);
//
//    // �������ͼ��
//    Mat dst = Mat::zeros(gray.size(), CV_32F);
//
//    // ִ�о������
//    for (int i = pad_h; i < img_h + pad_h; i++) {
//        for (int j = pad_w; j < img_w + pad_w; j++) {
//            float sum = 0.0;
//            // �������ͼ����������ۼ�
//            for (int k = -pad_h; k <= pad_h; k++) {
//                for (int l = -pad_w; l <= pad_w; l++) {
//                    // ��ȡͼ������ֵ
//                    uchar pixel = padded.at<uchar>(i + k, j + l);
//                    // ��ȡ�����Ȩ��
//                    float weight = kernel.at<float>(k + pad_h, l + pad_w);
//                    sum += pixel * weight;
//                }
//            }
//            // �洢����������ʱ��32λ���������������
//            dst.at<float>(i - pad_h, j - pad_w) = sum;
//        }
//    }
//
//    // ��һ����0-255��Χ��ת��Ϊ8λͼ��
//    normalize(dst, dst, 0, 255, NORM_MINMAX);
//    //ת����������
//    dst.convertTo(dst, CV_8U);
//
//
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
//    // ���岻ͬ�ľ���ˣ��ɸ��������޸ģ�
//    // 1. �񻯾���ˣ���ǿ��Ե��
//    Mat sharpen_kernel = (Mat_<float>(3, 3) <<
//        0, -1, 0,
//        -1, 5, -1,
//        0, -1, 0);
//
//    // 2. ģ������ˣ���ֵ�˲���
//    Mat blur_kernel = (Mat_<float>(3, 3) <<
//        1 / 9.0, 1 / 9.0, 1 / 9.0,
//        1 / 9.0, 1 / 9.0, 1 / 9.0,
//        1 / 9.0, 1 / 9.0, 1 / 9.0);
//
//    // 3. ��Ե������ˣ�Sobelˮƽ��Ե��
//    Mat edge_kernel = (Mat_<float>(3, 3) <<
//        -1, -2, -1,
//        0, 0, 0,
//        1, 2, 1);
//
//    // 4. ����Ч�������
//    Mat emboss_kernel = (Mat_<float>(3, 3) <<
//        -2, -1, 0,
//        -1, 1, 1,
//        0, 1, 2);
//
//    Mat liuqingkai_kernel = (Mat_<float>(3, 3) <<
//        0, -1, 0,
//        -1, 100, -1,
//        0, -1, 0);
//
//
//
//
//    // ִ�о������
//    Mat sharpen_dst = convolve(src, sharpen_kernel);
//    Mat blur_dst = convolve(src, blur_kernel);
//    Mat edge_dst = convolve(src, edge_kernel);
//    Mat emboss_dst = convolve(src, emboss_kernel);
//    Mat liuqingkai_dst = convolve(src, liuqingkai_kernel);
//
//    // ��ʾ���
//    imshow("ԭͼ", src);
//    imshow("��Ч��", sharpen_dst);
//    imshow("ģ��Ч��", blur_dst);
//    imshow("��Ե���", edge_dst);
//    imshow("����Ч��", emboss_dst);
//    imshow("���쿭Ч��", liuqingkai_dst);
//
//    waitKey(0);
//    destroyAllWindows();
//    return 0;
//}
