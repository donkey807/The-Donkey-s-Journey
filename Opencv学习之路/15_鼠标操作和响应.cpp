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
//    void mouse_drawing();
//};
////初始化矩阵对角线两点
//Point sp(-1, -1);
//Point ep(-1, -1);
//Mat temp;
//static void on_draw(int event,int x,int y,int flags,void *userdata)
//{
//    //创建矩阵
//    Mat bg = *((Mat*)userdata);
//    if (event == EVENT_LBUTTONDOWN)//按下鼠标左键
//    {
//        sp.x = x;
//        sp.y = y;
//        cout << "起始坐标为：(" << sp.x << "," << sp.y << ")" << endl;
//    }
//    else if (event == EVENT_LBUTTONUP)//松开鼠标左键
//    {
//
//        ep.x = x;
//        ep.y = y;
//        cout << "结束坐标为：(" << ep.x << "," << ep.y << ")\n" << endl;
//        //矩形长宽
//        int dx = abs(ep.x - sp.x);
//        int dy = abs(ep.y - sp.y);
//        //如果长宽符合条件，把矩形传入bg矩阵
//        if (dx > 0 && dy > 0)
//        {
//            Rect rect;
//            rect.x = sp.x;
//            rect.y = sp.y;
//            rect.height = dy;
//            rect.width = dx;
//            temp.copyTo(bg);
//            rectangle(bg, rect, Scalar(255, 0, 0), 1, 8, 0);
//            
//        }
//        //bg矩阵写入鼠标绘图窗口
//        imshow("鼠标绘图", bg);
//        //复位，为下一次矩形绘制做好准备
//        sp.x = -1;
//        sp.y = -1;
//    }
//    else if (event == EVENT_MOUSEMOVE)//鼠标移动
//    {
//        if (sp.x > 0 && sp.y > 0)
//        {
//            ep.x = x;
//            ep.y = y;
//            int dx = abs(ep.x - sp.x);
//            int dy = abs(ep.y - sp.y);
//            if (dx > 0 && dy > 0)
//            {
//                Rect rect;
//                rect.x = sp.x;
//                rect.y = sp.y;
//                rect.height = dy;
//                rect.width = dx;
//                temp.copyTo(bg);
//                rectangle(bg, rect, Scalar(255, 0, 0), 1, 8, 0);
//            }
//            imshow("鼠标绘图", bg);
//            
//            
//        }
//
//    }
//    
//}
//void QuickDemo::mouse_drawing()
//{
//    Mat bg = Mat::zeros(Size(900,690), CV_8UC3);
//    namedWindow("鼠标绘图", WINDOW_AUTOSIZE);
//    //创建鼠标控制(对鼠标控制窗口采用on_draw回调函数,并把bg窗口给予回调函数)
//    setMouseCallback("鼠标绘图", on_draw,(void*)(&bg));
//    temp = bg.clone();
//
//
//    
//
//    waitKey(99999);
//    destroyAllWindows();
//
//}
//
//int main()
//{
//    Mat image = imread("F:\\下载\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "无法读取图像文件！" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.mouse_drawing();
//    return 0;
//}