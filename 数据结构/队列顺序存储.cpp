//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct {
//    int data[MaxSize];  // �洢����Ԫ�ص�����
//    int front;          // ��ͷָ��
//    int rear;           // ��βָ��
//} SqQueue;
//
//// ��ʼ������
//void InitQueue(SqQueue& q) {
//    q.front = 0;
//    q.rear = 0;
//}
//
//// ��Ԫ������У�ֻ�ܴӶ�β��ӣ�
//bool Enqueue(SqQueue& q, int x) {
//    if ((q.rear + 1) % MaxSize == q.front) {  // ����
//        cerr << "��������" << endl;
//        return false;
//    }
//    q.data[q.rear] = x;  // �ڶ�β������Ԫ��
//    q.rear = (q.rear + 1) % MaxSize;  // ���¶�βָ��
//    return true;
//}
//
//// ����
//bool Dequeue(SqQueue& q, int& x) {
//    if (q.rear == q.front) {  // �ӿ�
//        cerr << "����Ϊ��" << endl;
//        return false;
//    }
//    x = q.data[q.front];  // ��ȡ��ͷԪ��
//    q.front = (q.front + 1) % MaxSize;  // ���¶�ͷָ��
//    return true;
//}
//
//// ��ȡ��ͷԪ��
//bool GetFront(SqQueue& q, int& x) {
//    if (q.rear == q.front) {  // �ӿ�
//        cerr << "����Ϊ��" << endl;
//        return false;
//    }
//    x = q.data[q.front];  // ��ȡ��ͷԪ��
//    return true;
//}
//
//// ���Դ���
//int main() {
//    SqQueue queue;
//    InitQueue(queue);  // ��ʼ������
//
//    Enqueue(queue, 1);
//    Enqueue(queue, 2);
//    Enqueue(queue, 3);
//
//    int value;
//    if (GetFront(queue, value)) {
//        cout << "��ͷԪ��: " << value << endl;  // �����ͷԪ��
//    }
//
//    while (Dequeue(queue, value)) {
//        cout << "����Ԫ��: " << value << endl;
//    }
//
//    return 0;
//}                
////�������һ��������ʱ+1��-1���۲��������ǿգ�ǰ��ָ��ָ��ͬһλ�����жϣ�