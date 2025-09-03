//#include <iostream>
//#include <cstring>  // ������׼�⺯��
//using namespace std;
//
//// ��ȡ�ַ�������
//int strlens(const char* s)
//{
//    const char* p = s;  // ʹ��ָ�� p �����ַ���
//    while (*p != '\0')  // ��ָ��ָ����ַ����� '\0' ʱ����
//    {
//        p++;
//    }
//    return p - s;  // ����ָ���ƶ��ľ��룬���ַ�������
//}
//
//// �����ַ�λ��
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
//// �ַ�������
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
//// �ַ�������
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
//// �ַ����Ƚ�
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
//// �ַ�����ת
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
//// �����Ӵ�
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