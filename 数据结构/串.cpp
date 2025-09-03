//#include <iostream>
//#include <cstring>  // 包含标准库函数
//using namespace std;
//
//// 获取字符串长度
//int strlens(const char* s)
//{
//    const char* p = s;  // 使用指针 p 遍历字符串
//    while (*p != '\0')  // 当指针指向的字符不是 '\0' 时继续
//    {
//        p++;
//    }
//    return p - s;  // 返回指针移动的距离，即字符串长度
//}
//
//// 查找字符位置
//int FindChar(char* s, char ch)
//{
//    int n = strlen(s);
//    for (int i = 0; i < n; i++)
//    {
//        if (s[i] == ch)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//// 字符串拷贝
//void CopyString(char* dest, const char* src)
//{
//    int i = 0;
//    while (src[i] != '\0')
//    {
//        dest[i] = src[i];
//        i++;
//    }
//    dest[i] = '\0';
//}
//
//// 字符串连接
//void Concatenate(char* dest, const char* src)
//{
//    int destLen = strlen(dest);
//    int i = 0;
//    while (src[i] != '\0')
//    {
//        dest[destLen + i] = src[i];
//        i++;
//    }
//    dest[destLen + i] = '\0';
//}
//
//// 字符串比较
//int CompareStrings(const char* s1, const char* s2)
//{
//    int i = 0;
//    while (s1[i] != '\0' && s2[i] != '\0')
//    {
//        if (s1[i] != s2[i])
//        {
//            return s1[i] - s2[i];
//        }
//        i++;
//    }
//    return s1[i] - s2[i];
//}
//
//// 字符串反转
//void ReverseString(char* s)
//{
//    int len = strlen(s);
//    for (int i = 0; i < len / 2; i++)
//    {
//        char temp = s[i];
//        s[i] = s[len - i - 1];
//        s[len - i - 1] = temp;
//    }
//}
//
//// 查找子串
//int FindSubstring(char* s, char* sub)
//{
//    int lenS = strlen(s);
//    int lenSub = strlen(sub);
//    for (int i = 0; i <= lenS - lenSub; i++)
//    {
//        int j;
//        for (j = 0; j < lenSub; j++)
//        {
//            if (s[i + j] != sub[j])
//            {
//                break;
//            }
//        }
//        if (j == lenSub)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    char str1[] = "Hello, World!";
//    char str2[] = "World";
//    char str3[100];
//
//    cout << "Length of str1: " << strlens(str1) << endl;
//    cout << "Find 'W' in str1: " << FindChar(str1, 'W') << endl;
//
//    CopyString(str3, str1);
//    cout << "Copied string: " << str3 << endl;
//
//    Concatenate(str3, " This is a test.");
//    cout << "Concatenated string: " << str3 << endl;
//
//    cout << "Compare str1 and str2: " << CompareStrings(str1, str2) << endl;
//
//    ReverseString(str2);
//    cout << "Reversed str2: " << str2 << endl;
//
//    cout << "Find substring 'World' in str1: " << FindSubstring(str1, str2) << endl;
//
//    return 0;
//}