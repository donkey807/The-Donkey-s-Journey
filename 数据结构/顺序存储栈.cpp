//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int top;
//}SqStack;
////��Ԫ����ջ
//bool Push(SqStack& s, int x)
//{
//	if(s.top==MaxSize-1)
//	{
//		return false;
//	}
//	s.top = s.top + 1;
//	s.data[s.top] = x;
//	return true;
//}
////��ջ
//bool Pop(SqStack& s, int &x)
//{
//	if (s.top == -1)//ջ��
//	{
//		return false;
//	}
//	x = s.data[s.top];
//	s.top -= 1;
//	return true;
//}
////��ȡջ��Ԫ��
//bool GetTop(SqStack& s, int &x)
//{
//	if (s.top == -1)//ջ��
//	{
//		return false;
//	}
//	x = s.data[s.top];
//	return true;
//}
////ɾ��ջ��Ԫ��
//bool DeleteTop(SqStack& s) {
//	if (s.top == -1) {
//		cerr << "ջΪ��" << endl;
//		return false;
//	}
//	s.top -= 1;
//	return true;
//}
////�������ú�������malloc����ռ䣬���Ժ����������Զ�ɾ���ڴ棬����free�ֶ��ͷ�
//int main() {
//	SqStack stack = { -1 };  // ��ʼ��ջ��ջ��ָ��Ϊ -1
//
//	Push(stack, 1);
//	Push(stack, 2);
//	Push(stack, 3);
//
//	int value;
//	if (GetTop(stack, value)) {
//		cout << "ջ��Ԫ��: " << value << endl;  // ���ջ��Ԫ��
//	}
//
//	if (DeleteTop(stack)) {
//		cout << "ɾ��ջ��Ԫ�غ�ջ��Ԫ��Ϊ: ";
//		if (GetTop(stack, value)) {
//			cout << value << endl;
//		}
//	}
//
//	while (Pop(stack, value)) {
//		cout << "����Ԫ��: " << value << endl;
//	}
//
//	return 0;
//}