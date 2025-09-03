//#include <stdlib.h>
//#include <iostream>
//using namespace std;
//
//typedef struct Node {
//    int data;
//    struct Node* next;
//} *LiStack;
//
//// 新元素入栈
//bool Push(LiStack& L, int x) {
//    Node* s = (Node*)malloc(sizeof(Node));
//    if (s == NULL) {
//        cerr << "内存分配失败" << endl;
//        return false;
//    }
//    s->data = x;     // 把元素存到节点结构体
//    s->next = L;     // s 节点插入在链式头部
//    L = s;           // 更新链表 L 指针指向 s 所指的地址
//    return true;
//}
//
//// 出栈
//bool Pop(LiStack& L, int& x) {
//    if (L == NULL) {
//        cerr << "栈为空" << endl;
//        return false;
//    }
//    Node* temp = L;  // 保存当前栈顶节点
//    x = temp->data;  // 获取栈顶元素的值
//    L = temp->next;  // 更新栈顶指针为下一个节点
//    free(temp);      // 使用 free 释放当前栈顶节点的内存
//    return true;
//}
//
//// 读取栈顶元素
//bool GetTop(LiStack& L, int& x) {
//    if (L == NULL) {
//        cerr << "栈为空" << endl;
//        return false;
//    }
//    x = L->data;     // 直接获取栈顶元素的值
//    return true;
//}
//
//// 删除栈顶元素
//bool DeleteTop(LiStack& L) {
//    if (L == NULL) {
//        cerr << "栈为空" << endl;
//        return false;
//    }
//    Node* temp = L;  // 保存当前栈顶节点
//    L = temp->next;  // 更新栈顶指针为下一个节点
//    free(temp);      // 使用 free 释放当前栈顶节点的内存
//    return true;
//}
//
//// 测试代码
//int main() {
//    LiStack stack = NULL;
//
//    Push(stack, 1);
//    Push(stack, 2);
//    Push(stack, 3);
//
//    int value;
//    if (GetTop(stack, value)) {
//        cout << "栈顶元素: " << value << endl;  // 输出栈顶元素
//    }
//
//    while (Pop(stack, value)) {
//        cout << "弹出元素: " << value << endl;
//    }
//
//    return 0;
//}