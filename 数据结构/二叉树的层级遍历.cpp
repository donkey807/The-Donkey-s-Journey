//#include <iostream>
//using namespace std;
//
//// �������ڵ�ṹ
//struct ElemType {
//    int data;
//};
//
//typedef struct BiTNode {
//    ElemType data;
//    struct BiTNode* lchild, * rchild;
//} BiTNode, * BiTree;
//
//// ���нڵ�ṹ
//typedef struct LinkNode {
//    BiTNode* data;             // �洢���ڵ��ָ��
//    struct LinkNode* next;
//} LinkNode;
//
//// ���нṹ
//typedef struct {
//    LinkNode* front, * rear;    // ��ͷ��β
//} LinkQueue;
//
//// ��ʼ������
//void InitQueue(LinkQueue* L) {
//    L->front = (LinkNode*)malloc(sizeof(LinkNode));  // ����ͷ�ڵ�
//    if (!L->front) {
//        cerr << "�ڴ����ʧ��" << endl;
//        exit(-1);
//    }
//    L->front->next = NULL;  // ��ʼ��ͷ�ڵ�� next ָ��Ϊ NULL
//    L->rear = L->front;     // rear ָ��ͷ�ڵ�
//}
//
//// ��Ӳ���
//bool EnQueue(LinkQueue* L, BiTree T) {
//    LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
//    if (!newNode) {
//        cerr << "�ڴ����ʧ��" << endl;
//        return false;
//    }
//    newNode->data = T;       // �洢���ڵ��ָ��
//    newNode->next = NULL;    // �½ڵ�� next ָ����Ϊ��
//
//    L->rear->next = newNode; // ���½ڵ�����β
//    L->rear = newNode;       // ���� rear ָ��
//    return true;
//}
//
//// �ж϶����Ƿ�Ϊ��
//bool IsEmpty(LinkQueue* L) {
//    return L->front == L->rear;  // ����Ϊ�յ������� front == rear
//}
//
//// ���Ӳ���
//bool DeQueue(LinkQueue* L, BiTree& T) {
//    if (L->front == L->rear) {  // ����Ϊ�յ������� front == rear
//        cerr << "����Ϊ��" << endl;
//        return false;
//    }
//    LinkNode* temp = L->front->next;  // ȡ����ͷ�ڵ�
//    T = temp->data;                   // ����ͷ�ڵ�����ݸ�ֵ�� T
//    L->front->next = temp->next;      // ���¶�ͷָ��
//    if (L->rear == temp) {            // ���������ֻ��һ���ڵ�
//        L->rear = L->front;           // ���� rear ָ��
//    }
//    free(temp);                       // �ͷŶ�ͷ�ڵ�
//    return true;
//}
//
//// ���ʽڵ�
//void visit(BiTree p) {
//    if (p != NULL) {
//        cout << p->data.data << " ";
//    }
//}
//
//// �������
//void LevelOrder(BiTree T) {
//    LinkQueue Q;
//    InitQueue(&Q);              // ��ʼ����������
//    BiTree p;
//    EnQueue(&Q, T);             // �����ڵ����
//    while (!IsEmpty(&Q)) {      // ���в�Ϊ����ѭ��
//        DeQueue(&Q, p);         // ��ͷ�ڵ����
//        visit(p);               // ���ʳ��ӽڵ�
//        if (p->lchild != NULL) {
//            EnQueue(&Q, p->lchild);     // �������
//        }
//        if (p->rchild != NULL) {
//            EnQueue(&Q, p->rchild);     // �Һ������
//        }
//    }
//}
//
//// ����һ���򵥵Ķ�����
//BiTree createTree() {
//    BiTree root = new BiTNode{ 1, NULL, NULL };
//    root->lchild = new BiTNode{ 2, NULL, NULL };
//    root->rchild = new BiTNode{ 3, NULL, NULL };
//    return root;
//}
//void freeTree(BiTree T) {
//    if (T == NULL) return;
//    freeTree(T->lchild);  // �ݹ��ͷ�������
//    freeTree(T->rchild);  // �ݹ��ͷ�������
//    delete T;             // �ͷŵ�ǰ�ڵ�
//}
//int main() {
//    BiTree root = createTree();  // ����һ���򵥵Ķ�����
//    cout << "������������";
//    LevelOrder(root);            // �������
//    cout << endl;
//    freeTree(root);
//    return 0;
//}