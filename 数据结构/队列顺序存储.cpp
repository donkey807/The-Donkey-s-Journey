//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct {
//    int data[MaxSize];  // 存储队列元素的数组
//    int front;          // 队头指针
//    int rear;           // 队尾指针
//} SqQueue;
//
//// 初始化队列
//void InitQueue(SqQueue& q) {
//    q.front = 0;
//    q.rear = 0;
//}
//
//// 新元素入队列（只能从队尾入队）
//bool Enqueue(SqQueue& q, int x) {
//    if ((q.rear + 1) % MaxSize == q.front) {  // 队满
//        cerr << "队列已满" << endl;
//        return false;
//    }
//    q.data[q.rear] = x;  // 在队尾插入新元素
//    q.rear = (q.rear + 1) % MaxSize;  // 更新队尾指针
//    return true;
//}
//
//// 出队
//bool Dequeue(SqQueue& q, int& x) {
//    if (q.rear == q.front) {  // 队空
//        cerr << "队列为空" << endl;
//        return false;
//    }
//    x = q.data[q.front];  // 获取队头元素
//    q.front = (q.front + 1) % MaxSize;  // 更新队头指针
//    return true;
//}
//
//// 读取队头元素
//bool GetFront(SqQueue& q, int& x) {
//    if (q.rear == q.front) {  // 队空
//        cerr << "队列为空" << endl;
//        return false;
//    }
//    x = q.data[q.front];  // 获取队头元素
//    return true;
//}
//
//// 测试代码
//int main() {
//    SqQueue queue;
//    InitQueue(queue);  // 初始化队列
//
//    Enqueue(queue, 1);
//    Enqueue(queue, 2);
//    Enqueue(queue, 3);
//
//    int value;
//    if (GetFront(queue, value)) {
//        cout << "队头元素: " << value << endl;  // 输出队头元素
//    }
//
//    while (Dequeue(queue, value)) {
//        cout << "出队元素: " << value << endl;
//    }
//
//    return 0;
//}                
////可以添加一个变量随时+1或-1来观察是满还是空（前后指针指向同一位置来判断）