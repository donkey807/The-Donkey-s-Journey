//#include <iostream>
//#include <cstring>  // ������׼�⺯��
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
//// ����ģʽƥ���㷨
//int Index(SString S, SString T)
//{
//    int i = 0, j = 0;  // ��0��ʼ����
//    while (i <= S.length - T.length)  // ȷ���Ӵ����ᳬ��������Χ
//    {
//        while (j < T.length)  // �Ƚ��Ӵ�
//        {
//            if (S.ch[i + j] == T.ch[j])
//            {
//                ++j;  // �����Ƚ���һ���ַ�
//            }
//            else
//            {
//                break;  // ��ƥ�䣬�˳��ڲ�ѭ��
//            }
//        }
//        if (j == T.length)  // ����Ӵ���ȫƥ��
//        {
//            return i;  // �����Ӵ��������е���ʼλ��
//        }
//        else
//        {
//            i = i + j + 1;  // ��ƥ�䣬i �ƶ�����һ��λ��
//            j = 0;  // ���� j
//        }
//    }
//    return -1;  // ƥ��ʧ�ܣ����� -1
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