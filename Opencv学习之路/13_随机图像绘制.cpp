//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Radom_drawing();
//};
//
//
//void QuickDemo::Radom_drawing()
//{
//    Mat bg = Mat::zeros(Size(1960,960), CV_8UC3);
//    int h = bg.rows;//��ȡ��������
//    int w = bg.cols;//��ȡ��������
//    RNG rng(1);//12345Ϊ����
//    
//
//    while (true)
//    {
//        int c = waitKey(10);
//        if (c == 27)
//        {
//            break;
//        }
//        
//        int x1 = rng.uniform(0, w);
//        int y1 = rng.uniform(0, h);
//        int x2 = rng.uniform(0, w);
//        int y2 = rng.uniform(0, h);
//        int b = rng.uniform(0, 255);
//        int g = rng.uniform(0, 255);
//        int r = rng.uniform(0, 255);
//        
//        bg = Scalar(0, 0, 0);//ˢ�´���
//
//        line(bg, Point(x1, y1), Point(x2, y2), Scalar(b, g, r), 1, LINE_AA);
//        
//        imshow("��ʾͼ��", bg);
//        
//    }
//    
//
//    imshow("��ʾͼ��", bg);
//
//    waitKey(99999);
//    destroyAllWindows();
//
//}





//int main()
//{
//    Mat image = imread("F:\\����\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
//        return -1;
//    }
//    
//    QuickDemo qd;
//    qd.Radom_drawing();
//    return 0;
//}