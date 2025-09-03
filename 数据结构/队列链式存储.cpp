//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链式队列的节点结构
//typedef struct Node {
//    int data;               // 数据域
//    struct Node* next;      // 指针域，指向下一个节点
//} Node;
//
//// 定义链式队列结构
//typedef struct {
//    Node* front;            // 队头指针
//    Node* rear;             // 队尾指针
//} LinkQueue;
//
//// 初始化队列
//void InitQueue(LinkQueue* Q) {
//    Q->front = Q->rear = (Node*)malloc(sizeof(Node)); // 创建头节点
//    if (!Q->front) {
//        printf("Memory allocation failed.\n");
//        exit(-1);
//    }
//    Q->front->next = NULL; // 初始化头节点的next为NULL
//}
//
//// 入队操作
//void EnQueue(LinkQueue* Q, int e) {
//    Node* newNode = (Node*)malloc(sizeof(Node)); // 创建新节点
//    if (!newNode) {
//        printf("Memory allocation failed.\n");
//        exit(-1);
//    }
//    newNode->data = e;      // 存储数据
//    newNode->next = NULL;   // 新节点的next指针置为NULL
//
//    Q->rear->next = newNode; // 将新节点链接到队尾
//    Q->rear = newNode;       // 更新队尾指针
//}
//
//// 出队操作
//int DeQueue(LinkQueue* Q) {
//    if (Q->front == Q->rear) {
//        printf("Queue is empty. Cannot dequeue.\n");
//        return -1; // 队列为空，返回错误码
//    }
//
//    Node* temp = Q->front->next;        // 获取队头节点
//    int data = temp->data;              // 获取队头节点的数据
//    Q->front->next = temp->next;        // 将队头指针后移
//
//    if (Q->rear == temp) {              // 如果队尾节点被删除，更新队尾指针
//        Q->rear = Q->front;
//    }
//
//    free(temp);                         // 释放队头节点
//    return data;                        // 返回出队的数据
//}
//
//// 判断队列是否为空
//int IsEmpty(LinkQueue Q) {
//    return Q.front == Q.rear; // 如果队头等于队尾，队列为空
//}
//
//// 获取队头元素
//int GetHead(LinkQueue Q) {
//    if (Q.front == Q.rear) {
//        printf("Queue is empty. No head element.\n");
//        return -1; // 队列为空，返回错误码
//    }
//    return Q.front->next->data; // 返回队头节点的数据
//}
//
//// 销毁队列
//void DestroyQueue(LinkQueue* Q) {
//    Node* current = Q->front;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//    Q->front = Q->rear = NULL;
//}
//
//// 测试链式队列
//int main() {
//    LinkQueue Q;
//    InitQueue(&Q); // 初始化队列
//
//    // 入队操作
//    EnQueue(&Q, 10);
//    EnQueue(&Q, 20);
//    EnQueue(&Q, 30);
//
//    // 获取队头元素
//    printf("Head element: %d\n", GetHead(Q));
//
//    // 出队操作
//    printf("Dequeue: %d\n", DeQueue(&Q));
//    printf("Dequeue: %d\n", DeQueue(&Q));
//
//    // 判断队列是否为空
//    printf("Is queue empty? %s\n", IsEmpty(Q) ? "Yes" : "No");
//
//    // 销毁队列
//    DestroyQueue(&Q);
//
//    return 0;
//}