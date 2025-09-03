//#include <stdio.h>
//#include <stdlib.h>
//
//// ������ʽ���еĽڵ�ṹ
//typedef struct Node {
//    int data;               // ������
//    struct Node* next;      // ָ����ָ����һ���ڵ�
//} Node;
//
//// ������ʽ���нṹ
//typedef struct {
//    Node* front;            // ��ͷָ��
//    Node* rear;             // ��βָ��
//} LinkQueue;
//
//// ��ʼ������
//void InitQueue(LinkQueue* Q) {
//    Q->front = Q->rear = (Node*)malloc(sizeof(Node)); // ����ͷ�ڵ�
//    if (!Q->front) {
//        printf("Memory allocation failed.\n");
//        exit(-1);
//    }
//    Q->front->next = NULL; // ��ʼ��ͷ�ڵ��nextΪNULL
//}
//
//// ��Ӳ���
//void EnQueue(LinkQueue* Q, int e) {
//    Node* newNode = (Node*)malloc(sizeof(Node)); // �����½ڵ�
//    if (!newNode) {
//        printf("Memory allocation failed.\n");
//        exit(-1);
//    }
//    newNode->data = e;      // �洢����
//    newNode->next = NULL;   // �½ڵ��nextָ����ΪNULL
//
//    Q->rear->next = newNode; // ���½ڵ����ӵ���β
//    Q->rear = newNode;       // ���¶�βָ��
//}
//
//// ���Ӳ���
//int DeQueue(LinkQueue* Q) {
//    if (Q->front == Q->rear) {
//        printf("Queue is empty. Cannot dequeue.\n");
//        return -1; // ����Ϊ�գ����ش�����
//    }
//
//    Node* temp = Q->front->next;        // ��ȡ��ͷ�ڵ�
//    int data = temp->data;              // ��ȡ��ͷ�ڵ������
//    Q->front->next = temp->next;        // ����ͷָ�����
//
//    if (Q->rear == temp) {              // �����β�ڵ㱻ɾ�������¶�βָ��
//        Q->rear = Q->front;
//    }
//
//    free(temp);                         // �ͷŶ�ͷ�ڵ�
//    return data;                        // ���س��ӵ�����
//}
//
//// �ж϶����Ƿ�Ϊ��
//int IsEmpty(LinkQueue Q) {
//    return Q.front == Q.rear; // �����ͷ���ڶ�β������Ϊ��
//}
//
//// ��ȡ��ͷԪ��
//int GetHead(LinkQueue Q) {
//    if (Q.front == Q.rear) {
//        printf("Queue is empty. No head element.\n");
//        return -1; // ����Ϊ�գ����ش�����
//    }
//    return Q.front->next->data; // ���ض�ͷ�ڵ������
//}
//
//// ���ٶ���
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
//// ������ʽ����
//int main() {
//    LinkQueue Q;
//    InitQueue(&Q); // ��ʼ������
//
//    // ��Ӳ���
//    EnQueue(&Q, 10);
//    EnQueue(&Q, 20);
//    EnQueue(&Q, 30);
//
//    // ��ȡ��ͷԪ��
//    printf("Head element: %d\n", GetHead(Q));
//
//    // ���Ӳ���
//    printf("Dequeue: %d\n", DeQueue(&Q));
//    printf("Dequeue: %d\n", DeQueue(&Q));
//
//    // �ж϶����Ƿ�Ϊ��
//    printf("Is queue empty? %s\n", IsEmpty(Q) ? "Yes" : "No");
//
//    // ���ٶ���
//    DestroyQueue(&Q);
//
//    return 0;
//}