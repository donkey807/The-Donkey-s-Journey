//#include <opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//class QuickDemo
//{
//public:
//    void Change_Color(Mat& image);
//};
//
//
//Mat src;
//
//
//static void clear_Windows(void)
//{
//    destroyWindow("�Ҷ�ͼ��");
//    destroyWindow("HSVͼ��");
//    
//}
//// ����ͼ������ȡ��ԱȶȲ�����������
//void QuickDemo::Change_Color(Mat& image)
//{
//    // ����ԭʼͼ��
//    src = image;
//    int map[] =
//    {
//    COLORMAP_AUTUMN,
//    COLORMAP_BONE,
//    COLORMAP_JET ,
//    COLORMAP_WINTER,
//    COLORMAP_RAINBOW,
//    COLORMAP_OCEAN ,
//    COLORMAP_SUMMER ,
//    COLORMAP_SPRING ,
//    COLORMAP_COOL ,
//    COLORMAP_HSV ,
//    COLORMAP_PINK ,
//    COLORMAP_HOT ,
//    COLORMAP_PARULA ,
//    COLORMAP_MAGMA ,
//    COLORMAP_INFERNO ,
//    COLORMAP_PLASMA ,
//    COLORMAP_VIRIDIS ,
//    COLORMAP_CIVIDIS ,
//    COLORMAP_TWILIGHT ,
//    COLORMAP_TWILIGHT_SHIFTED ,
//    COLORMAP_TURBO ,
//    COLORMAP_DEEPGREEN
//    };
//    // ����ͼ�񴰿�
//    namedWindow("�ԱȶȺ����ȵ���", WINDOW_AUTOSIZE);
//
//    int i = 0;
//    while (true)
//    {
//        int c = waitKey(10); // �ȴ�10ms�����������¼��������
//        if (c == 27) // ESC���˳�
//        {
//            break;
//        }
//       
//            applyColorMap(image, src, map[i%19]);
//           
//            imshow("photo", src);
//            waitKey(1000);
//            destroyAllWindows();
//            i++;
//        
//    }
//}
//
//int main()
//{
//    Mat image = imread("C:\\Users\\���쿭\\source\\repos\\OpenCV__Project\\cat.jpg");
//    if (image.empty())
//    {
//        cout << "�޷���ȡͼ���ļ���" << endl;
//        return -1;
//    }
//
//    QuickDemo qd;
//    qd.Change_Color(image); // �����������ͬʱ���������Ͱ���
//
//    destroyAllWindows();
//    return 0;
//}

//            applyColorMap(image, src, map[i%19]);