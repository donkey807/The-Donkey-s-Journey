//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int top;
//}SqStack;
////新元素入栈
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
////出栈
//bool Pop(SqStack& s, int &x)
//{
//	if (s.top == -1)//栈空
//	{
//		return false;
//	}
//	x = s.data[s.top];
//	s.top -= 1;
//	return true;
//}
////读取栈顶元素
//bool GetTop(SqStack& s, int &x)
//{
//	if (s.top == -1)//栈空
//	{
//		return false;
//	}
//	x = s.data[s.top];
//	return true;
//}
////删除栈顶元素
//bool DeleteTop(SqStack& s) {
//	if (s.top == -1) {
//		cerr << "栈为空" << endl;
//		return false;
//	}
//	s.top -= 1;
//	return true;
//}
////由于运用函数而非malloc申请空间，所以函数结束后自动删除内存，不用free手动释放
//int main() {
//	SqStack stack = { -1 };  // 初始化栈，栈顶指针为 -1
//
//	Push(stack, 1);
//	Push(stack, 2);
//	Push(stack, 3);
//
//	int value;
//	if (GetTop(stack, value)) {
//		cout << "栈顶元素: " << value << endl;  // 输出栈顶元素
//	}
//
//	if (DeleteTop(stack)) {
//		cout << "删除栈顶元素后，栈顶元素为: ";
//		if (GetTop(stack, value)) {
//			cout << value << endl;
//		}
//	}
//
//	while (Pop(stack, value)) {
//		cout << "弹出元素: " << value << endl;
//	}
//
//	return 0;
//}