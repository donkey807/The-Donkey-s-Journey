//#include <opencv2/opencv.hpp>
//
//#include<vector>
//
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void fill_and_drawing();
//};
//
//
//void QuickDemo::fill_and_drawing()
//{
//    Mat bg = Mat::zeros(Size(1960, 960), CV_8UC3);
//   
//    Point p1(100, 100);
//    Point p2(350, 100);
//    Point p3(450, 280);
//    Point p4(320, 450);
//    Point p5(80, 400);
//   
//    vector<Point> pts;
//    pts.push_back(p1);
//    pts.push_back(p2);
//    pts.push_back(p3);
//    pts.push_back(p4);
//    pts.push_back(p5);
//    
//    polylines(bg, pts, true, Scalar(0, 0, 255), 1, 8, 0);//���ƶ���α߽�
//    fillPoly(bg, pts, Scalar(0, 0, 255), 8,0);//�������
//
//    /*vector<vector<Point>> contours;
//    contours.push_back(pts);
//    //Ҳ�������������
//    drawContours(bg, contours, -1, Scalar(255, 0, 0), -1);*/
//
//
//
//    imshow("��ʾͼ��", bg);
//
//    waitKey(99999);
//    destroyAllWindows();
//
//}
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
//    qd.fill_and_drawing();
//    return 0;
//}