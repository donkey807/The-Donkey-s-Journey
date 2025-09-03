//#include <stdlib.h>
//#include <iostream>
//using namespace std;
//
//typedef struct Node {
//    int data;
//    struct Node* next;
//} *LiStack;
//
//// ��Ԫ����ջ
//bool Push(LiStack& L, int x) {
//    Node* s = (Node*)malloc(sizeof(Node));
//    if (s == NULL) {
//        cerr << "�ڴ����ʧ��" << endl;
//        return false;
//    }
//    s->data = x;     // ��Ԫ�ش浽�ڵ�ṹ��
//    s->next = L;     // s �ڵ��������ʽͷ��
//    L = s;           // �������� L ָ��ָ�� s ��ָ�ĵ�ַ
//    return true;
//}
//
//// ��ջ
//bool Pop(LiStack& L, int& x) {
//    if (L == NULL) {
//        cerr << "ջΪ��" << endl;
//        return false;
//    }
//    Node* temp = L;  // ���浱ǰջ���ڵ�
//    x = temp->data;  // ��ȡջ��Ԫ�ص�ֵ
//    L = temp->next;  // ����ջ��ָ��Ϊ��һ���ڵ�
//    free(temp);      // ʹ�� free �ͷŵ�ǰջ���ڵ���ڴ�
//    return true;
//}
//
//// ��ȡջ��Ԫ��
//bool GetTop(LiStack& L, int& x) {
//    if (L == NULL) {
//        cerr << "ջΪ��" << endl;
//        return false;
//    }
//    x = L->data;     // ֱ�ӻ�ȡջ��Ԫ�ص�ֵ
//    return true;
//}
//
//// ɾ��ջ��Ԫ��
//bool DeleteTop(LiStack& L) {
//    if (L == NULL) {
//        cerr << "ջΪ��" << endl;
//        return false;
//    }
//    Node* temp = L;  // ���浱ǰջ���ڵ�
//    L = temp->next;  // ����ջ��ָ��Ϊ��һ���ڵ�
//    free(temp);      // ʹ�� free �ͷŵ�ǰջ���ڵ���ڴ�
//    return true;
//}
//
//// ���Դ���
//int main() {
//    LiStack stack = NULL;
//
//    Push(stack, 1);
//    Push(stack, 2);
//    Push(stack, 3);
//
//    int value;
//    if (GetTop(stack, value)) {
//        cout << "ջ��Ԫ��: " << value << endl;  // ���ջ��Ԫ��
//    }
//
//    while (Pop(stack, value)) {
//        cout << "����Ԫ��: " << value << endl;
//    }
//
//    return 0;
//}