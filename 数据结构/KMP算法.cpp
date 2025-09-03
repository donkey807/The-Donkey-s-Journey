////����ģʽƥ���㷨�Ľ���
////����ָ�벻���ݣ�ֻ��ģʽָ�����
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//#define MaxLen 256  // ��������ַ�������
//
//typedef struct {
//    char ch[MaxLen];  // �洢�ַ���
//    int length;       // �ַ�������
//} SString;
//
//// ���� next ����
//void GetNext(SString T, int next[]) {
//    int i = 0, j = -1;  // i ��ʾ��ǰ������ַ�λ�ã�j ��ʾ���ͬǰ��׺�ĳ���
//    next[0] = -1;      // ��ʼ�� next ����ĵ�һ��ֵΪ -1
//
//    while (i < T.length-1) {
//        if (j == -1 || T.ch[i] == T.ch[j])//T.ch[i] == T.ch[j]ǰ��׺��ͬ
//        {
//            i++;//����ȷ��ǰ��׺�ж�����ͬ�ַ�
//            j++;
//            next[i] = j;  // ��ǰλ�õ� next ֵ��Ϊ�˺���ֱ����ת����Ӧλ��
//        }
//        else {
//            j = next[j];  // ��ƥ��ʱ������ next ������ݣ�ֱ�Ӱ�jָ����ת����׺λ�ã�
//        }
//    }
//}
////��j���ȽϷ���ʧ�䣬�ڰ�ǰ׺��ͬ����ĸ���䵽�����ڷ���һ��ʧ�䣨next����Ϊ�����ʧ��Ҳ��Ҫ��KPM��һ���Ż�
//// ���� nextval ���飨�Ż���� next ���飩
//void GetNextval(SString T, int nextval[]) {
//    int i = 1, j = 0;  // i ��ʾ��ǰ������ַ�λ�ã�j ��ʾ���ͬǰ��׺�ĳ���
//    nextval[0] = -1;   // ��ʼ�� nextval ����ĵ�һ��ֵΪ -1
//
//    while (i < T.length) {
//        if (j == -1 || T.ch[i] == T.ch[j]) {
//            i++;
//            j++;
//            if (T.ch[i] != T.ch[j])//i��j�仯��ͬ��˵���Ѿ��ﵽǰ��׺��ͬ������� 
//            {
//                nextval[i] = j;  // �����ǰ�ַ��� next λ�õ��ַ���ͬ��ֱ�Ӹ�ֵ
//            }
//            else {
//                nextval[i] = nextval[j];  // �����ͬ�������ظ�ƥ��
//            }
//        }
//        else {
//            j = nextval[j];  // ��ƥ��ʱ������ nextval �������
//        }
//    }
//}
//
//// KMP ƥ�亯��
//int Index(SString S, SString T, int nextval[]) {
//    int i = 0, j = 0;  // i ��ʾ���� S �ĵ�ǰλ�ã�j ��ʾ�Ӵ� T �ĵ�ǰλ��
//
//    while (i < S.length && j < T.length) {
//        if (j == -1 || S.ch[i] == T.ch[j]) {
//            i++;  // ����ָ�������ƶ�
//            j++;  // �Ӵ�ָ�������ƶ�
//        }
//        else {
//            j = nextval[j];  // ��ƥ��ʱ������ nextval ������� j ��ֵ
//        }
//    }
//
//    if (j == T.length) {
//        return i - T.length;  // ƥ��ɹ�������ƥ�����ʼλ��
//    }
//    else {
//        return -1;  // ƥ��ʧ�ܣ����� -1
//    }
//}
//
//int main() {
//    SString S, T;
//
//    // ��ʼ������ S ���Ӵ� T
//    strncpy_s(S.ch, "ababcabcacbab",sizeof(S.ch));
//    S.length = strlen(S.ch);
//    strncpy_s(T.ch, "abc",sizeof(T.ch));
//    T.length = strlen(T.ch);
//
//    int nextval[MaxLen];  // �洢 nextval ����
//
//    // ���� nextval ����
//    GetNextval(T, nextval);
//
//    // ���� KMP ƥ��
//    int pos = Index(S, T, nextval);
//
//    if (pos != -1) {
//        cout << "ƥ��ɹ���λ��Ϊ: " << pos << endl;
//    }
//    else {
//        cout << "ƥ��ʧ��" << endl;
//    }
//
//    return 0;
//}