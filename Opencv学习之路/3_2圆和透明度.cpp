//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//    // 1. ��������ͼ��3ͨ����500x500����ɫ��
//    Mat background = Mat::zeros(Size(500, 500), CV_8UC3);
//    background.setTo(Scalar(0, 0, 255));  // BGR��ʽ����ɫ����
//
//    // 2. ������͸��ͨ����ǰ��ͼ��4ͨ����200x200��
//    Mat foreground = Mat::zeros(Size(200, 200), CV_8UC4);
//
//    // 3. ����ǰ�����ݣ���ɫԲ�Σ���������Alphaͨ��
//    // Բ��(100,100)���뾶80����ɫ(255,0,0,255)����ɫ��B=255��+��ȫ��͸����A=255��
//    circle(foreground, Point(100, 100), 80, Scalar(255, 0, 0, 150), -1);
//
//    // 4. ����Բ�α�Ե��Alphaֵ���ñ�Ե��͸����
//    // ����һ����С��Բ��Alphaֵ��Ϊ100����͸����
//    circle(foreground, Point(100, 100), 70, Scalar(255, 0, 0, 100), -1);
//
//    // 5. ��ǰ��ͼ���ӵ�����ͼ��ָ��λ�ã����Ͻ�����(150,150)��
//    Mat result = background.clone();
//    for (int y = 0; y < foreground.rows; y++) {
//        for (int x = 0; x < foreground.cols; x++) {
//            // ��ȡǰ��ͼ��ǰ���ص�B��G��R��Aֵ
//            Vec4b fg = foreground.at<Vec4b>(y, x);
//            uchar b = fg[0];  // ��ͨ��
//            uchar g = fg[1];  // ��ͨ��
//            uchar r = fg[2];  // ��ͨ��
//            uchar a = fg[3];  // Alphaͨ����͸���ȣ�
//
//            // ������Ӻ������ֵ������Alpha>0ʱ�ŵ��ӣ�
//            if (a > 0) {
//                // ����ͼ��Ӧλ�õ�����
//                Vec3b& bg = result.at<Vec3b>(y + 150, x + 150);
//
//                // ͸���Ȼ�Ϲ�ʽ��ǰ��*Alpha/255 + ����*(1-Alpha/255)
//                bg[0] = saturate_cast<uchar>((b * a + bg[0] * (255 - a)) / 255);
//                bg[1] = saturate_cast<uchar>((g * a + bg[1] * (255 - a)) / 255);
//                bg[2] = saturate_cast<uchar>((r * a + bg[2] * (255 - a)) / 255);
//            }
//        }
//    }
//
//    // ��ʾ���
//    imshow("����Ч��", result);
//    waitKey(0);
//    return 0;
//}
