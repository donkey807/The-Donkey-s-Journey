//#include <iostream>
//#include <cstring>  // 包含标准库函数
//using namespace std;
//
//#define MaxLen 255
//
//typedef struct
//{
//    char ch[MaxLen];
//    int length;
//} SString;
//
//// 朴素模式匹配算法
//int Index(SString S, SString T)
//{
//    int i = 0, j = 0;  // 从0开始索引
//    while (i <= S.length - T.length)  // 确保子串不会超出主串范围
//    {
//        while (j < T.length)  // 比较子串
//        {
//            if (S.ch[i + j] == T.ch[j])
//            {
//                ++j;  // 继续比较下一个字符
//            }
//            else
//            {
//                break;  // 不匹配，退出内层循环
//            }
//        }
//        if (j == T.length)  // 如果子串完全匹配
//        {
//            return i;  // 返回子串在主串中的起始位置
//        }
//        else
//        {
//            i = i + j + 1;  // 不匹配，i 移动到下一个位置
//            j = 0;  // 重置 j
//        }
//    }
//    return -1;  // 匹配失败，返回 -1
//}
//
//int main()
//{
//    SString S = { "This is a simple example text for naive string matching.",strlen(S.ch)};
//    SString T = { "example", strlen(T.ch)};
//    int position = Index(S, T);
//    if (position != -1)
//    {
//        cout << "Pattern found at position: " << position << endl;
//    }
//    else
//    {
//        cout << "Pattern not found." << endl;
//    }
//
//    return 0;
//}