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
//    void video_demo(Mat& image);
//    
//};
//void QuickDemo::video_demo(Mat& image)
//{
//    //���ű�����Ƶ����0��Ϊ·��
//    VideoCapture capture(0);
//
//
//    namedWindow("Frame", WINDOW_NORMAL);
//    // �ֶ����ô��ڴ�С��������Ҫ������
//    resizeWindow("Frame", 1920, 1280);
//
//    //��ȡ��Ƶ������Ƭ������֡��
//    int Frame_width = capture.get(CAP_PROP_FRAME_WIDTH);
//    int Frame_height = capture.get(CAP_PROP_FRAME_HEIGHT);
//    int count = capture.get(CAP_PROP_FRAME_COUNT);
//    int FPS = capture.get(CAP_PROP_FPS);
//    //VideoWriter writer("D://",capture.get(CAP_PROP_FOCUS),FPS,Size(Frame_width,Frame_height),true);
//    cout <<"Frame_width" << Frame_width << endl;
//    cout <<"Frame_height" << Frame_height << endl;
//    cout <<"count"<< count << endl;
//    cout <<"FPS" << FPS << endl;
//
//
//    Mat Frame;
//    while (true)
//    {
//        //��ȡ���񵽵�һ֡ͼ��
//        capture.read(Frame);
//        if (Frame.empty())
//        {
//            break;
//        }
//        //��ʾͼ��
//        
//        imshow("Frame", Frame);
//        
//        int c = waitKey(10);
//        if (c == 27)
//        {
//            break;
//        }
//
//    }
//
//    capture.release();
//    //writer.release();
//
//    
//}
//
//int main()
//{
//    Mat image = imread("F:\\����\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "�޷���ȡ�ļ�" << endl;
//    }
//
//        
//    QuickDemo qd;
//    qd.video_demo(image);
//    
//
//
//
//
//
//    system("pause");
//    return 0;
//}