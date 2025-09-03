////朴素模式匹配算法的进阶
////主串指针不回溯，只有模式指针回溯
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//#define MaxLen 256  // 定义最大字符串长度
//
//typedef struct {
//    char ch[MaxLen];  // 存储字符串
//    int length;       // 字符串长度
//} SString;
//
//// 计算 next 数组
//void GetNext(SString T, int next[]) {
//    int i = 0, j = -1;  // i 表示当前处理的字符位置，j 表示最长相同前后缀的长度
//    next[0] = -1;      // 初始化 next 数组的第一个值为 -1
//
//    while (i < T.length-1) {
//        if (j == -1 || T.ch[i] == T.ch[j])//T.ch[i] == T.ch[j]前后缀相同
//        {
//            i++;//继续确定前后缀有多少相同字符
//            j++;
//            next[i] = j;  // 当前位置的 next 值，为了后期直接跳转到相应位置
//        }
//        else {
//            j = next[j];  // 不匹配时，根据 next 数组回溯（直接把j指针跳转到后缀位置）
//        }
//    }
//}
////在j处比较发生失配，在把前缀相同的字母运输到这里在发生一次失配（next），为了这次失配也不要，KPM进一步优化
//// 计算 nextval 数组（优化后的 next 数组）
//void GetNextval(SString T, int nextval[]) {
//    int i = 1, j = 0;  // i 表示当前处理的字符位置，j 表示最长相同前后缀的长度
//    nextval[0] = -1;   // 初始化 nextval 数组的第一个值为 -1
//
//    while (i < T.length) {
//        if (j == -1 || T.ch[i] == T.ch[j]) {
//            i++;
//            j++;
//            if (T.ch[i] != T.ch[j])//i和j变化后不同，说明已经达到前后缀相同的最长长度 
//            {
//                nextval[i] = j;  // 如果当前字符与 next 位置的字符不同，直接赋值
//            }
//            else {
//                nextval[i] = nextval[j];  // 如果相同，跳过重复匹配
//            }
//        }
//        else {
//            j = nextval[j];  // 不匹配时，根据 nextval 数组回溯
//        }
//    }
//}
//
//// KMP 匹配函数
//int Index(SString S, SString T, int nextval[]) {
//    int i = 0, j = 0;  // i 表示主串 S 的当前位置，j 表示子串 T 的当前位置
//
//    while (i < S.length && j < T.length) {
//        if (j == -1 || S.ch[i] == T.ch[j]) {
//            i++;  // 主串指针向右移动
//            j++;  // 子串指针向右移动
//        }
//        else {
//            j = nextval[j];  // 不匹配时，根据 nextval 数组调整 j 的值
//        }
//    }
//
//    if (j == T.length) {
//        return i - T.length;  // 匹配成功，返回匹配的起始位置
//    }
//    else {
//        return -1;  // 匹配失败，返回 -1
//    }
//}
//
//int main() {
//    SString S, T;
//
//    // 初始化主串 S 和子串 T
//    strncpy_s(S.ch, "ababcabcacbab",sizeof(S.ch));
//    S.length = strlen(S.ch);
//    strncpy_s(T.ch, "abc",sizeof(T.ch));
//    T.length = strlen(T.ch);
//
//    int nextval[MaxLen];  // 存储 nextval 数组
//
//    // 计算 nextval 数组
//    GetNextval(T, nextval);
//
//    // 进行 KMP 匹配
//    int pos = Index(S, T, nextval);
//
//    if (pos != -1) {
//        cout << "匹配成功，位置为: " << pos << endl;
//    }
//    else {
//        cout << "匹配失败" << endl;
//    }
//
//    return 0;
//}