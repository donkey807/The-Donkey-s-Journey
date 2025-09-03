//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//    // 1. 创建背景图（3通道，500x500，红色）
//    Mat background = Mat::zeros(Size(500, 500), CV_8UC3);
//    background.setTo(Scalar(0, 0, 255));  // BGR格式，红色背景
//
//    // 2. 创建带透明通道的前景图（4通道，200x200）
//    Mat foreground = Mat::zeros(Size(200, 200), CV_8UC4);
//
//    // 3. 绘制前景内容（蓝色圆形），并设置Alpha通道
//    // 圆心(100,100)，半径80，颜色(255,0,0,255)即蓝色（B=255）+完全不透明（A=255）
//    circle(foreground, Point(100, 100), 80, Scalar(255, 0, 0, 150), -1);
//
//    // 4. 调整圆形边缘的Alpha值（让边缘半透明）
//    // 绘制一个稍小的圆，Alpha值设为100（半透明）
//    circle(foreground, Point(100, 100), 70, Scalar(255, 0, 0, 100), -1);
//
//    // 5. 将前景图叠加到背景图的指定位置（左上角坐标(150,150)）
//    Mat result = background.clone();
//    for (int y = 0; y < foreground.rows; y++) {
//        for (int x = 0; x < foreground.cols; x++) {
//            // 获取前景图当前像素的B、G、R、A值
//            Vec4b fg = foreground.at<Vec4b>(y, x);
//            uchar b = fg[0];  // 蓝通道
//            uchar g = fg[1];  // 绿通道
//            uchar r = fg[2];  // 红通道
//            uchar a = fg[3];  // Alpha通道（透明度）
//
//            // 计算叠加后的像素值（仅当Alpha>0时才叠加）
//            if (a > 0) {
//                // 背景图对应位置的像素
//                Vec3b& bg = result.at<Vec3b>(y + 150, x + 150);
//
//                // 透明度混合公式：前景*Alpha/255 + 背景*(1-Alpha/255)
//                bg[0] = saturate_cast<uchar>((b * a + bg[0] * (255 - a)) / 255);
//                bg[1] = saturate_cast<uchar>((g * a + bg[1] * (255 - a)) / 255);
//                bg[2] = saturate_cast<uchar>((r * a + bg[2] * (255 - a)) / 255);
//            }
//        }
//    }
//
//    // 显示结果
//    imshow("叠加效果", result);
//    waitKey(0);
//    return 0;
//}
