//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void drawing_demo(Mat& image);
//};
//
//
//void QuickDemo::drawing_demo(Mat& image)
//{
//    Rect rect;//���ڶԾ��εĻ���typedef Rect_<int> Rect2i;int����������ΪRect
//    Mat bg = Mat::zeros(image.size(), image.type());
//    //������ʾλ������
//    rect.x = 100;
//    rect.y = 100;
//    //������ʾ��С
//    rect.height = 300;
//    rect.width = 250;
//    //������ʾ��bg����
//    rectangle(bg, rect, Scalar(0, 0, 255), 1, 8, 0);//���ƾ���
//    //Բ����ʾ��bg����
//    circle(bg, Point(100,200), 100,Scalar(0, 0, 255), 1, LINE_AA, 0);//����Բ
//    //ֱ����ʾ��bg����
//    line(bg,Point(300, 200), Point(250, 100), Scalar(0, 0, 255), 1, LINE_AA, 0);//����ֱ��
//    //��Բ��ʾ��bg����
//    RotatedRect rrt;
//    rrt.center = Point(200, 200);
//    rrt.angle = 180;
//    rrt.size = Size(300, 250);
//    ellipse(bg, rrt, Scalar(0, 255, 255), 2, LINE_AA);//������Բ
//
//    
//    imshow("��ʾͼ��", bg);
//    
//    waitKey(99999);
//    destroyAllWindows();
//
//}
//
//
//
//
//
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
//    qd.drawing_demo(image);
//    return 0;
//}