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
//    //播放本地视频，把0改为路径
//    VideoCapture capture(0);
//
//
//    namedWindow("Frame", WINDOW_NORMAL);
//    // 手动设置窗口大小（根据需要调整）
//    resizeWindow("Frame", 1920, 1280);
//
//    //获取视频长宽，照片总数，帧率
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
//        //读取捕获到的一帧图像
//        capture.read(Frame);
//        if (Frame.empty())
//        {
//            break;
//        }
//        //显示图像
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
//    Mat image = imread("F:\\下载\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "无法读取文件" << endl;
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