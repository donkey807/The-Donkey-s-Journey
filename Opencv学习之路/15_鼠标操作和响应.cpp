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
////��ʼ������Խ�������
//Point sp(-1, -1);
//Point ep(-1, -1);
//Mat temp;
//static void on_draw(int event,int x,int y,int flags,void *userdata)
//{
//    //��������
//    Mat bg = *((Mat*)userdata);
//    if (event == EVENT_LBUTTONDOWN)//����������
//    {
//        sp.x = x;
//        sp.y = y;
//        cout << "��ʼ����Ϊ��(" << sp.x << "," << sp.y << ")" << endl;
//    }
//    else if (event == EVENT_LBUTTONUP)//�ɿ�������
//    {
//
//        ep.x = x;
//        ep.y = y;
//        cout << "��������Ϊ��(" << ep.x << "," << ep.y << ")\n" << endl;
//        //���γ���
//        int dx = abs(ep.x - sp.x);
//        int dy = abs(ep.y - sp.y);
//        //�����������������Ѿ��δ���bg����
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
//        //bg����д������ͼ����
//        imshow("����ͼ", bg);
//        //��λ��Ϊ��һ�ξ��λ�������׼��
//        sp.x = -1;
//        sp.y = -1;
//    }
//    else if (event == EVENT_MOUSEMOVE)//����ƶ�
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
//            imshow("����ͼ", bg);
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
//    namedWindow("����ͼ", WINDOW_AUTOSIZE);
//    //����������(�������ƴ��ڲ���on_draw�ص�����,����bg���ڸ���ص�����)
//    setMouseCallback("����ͼ", on_draw,(void*)(&bg));
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
//    Mat image = imread("F:\\����\\opencv_tutorial_data-master\\opencv_tutorial_data-master\\images\\greenback.png");
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.mouse_drawing();
//    return 0;
//}