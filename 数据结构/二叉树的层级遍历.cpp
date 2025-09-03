//#include <iostream>
//using namespace std;
//
//// 二叉树节点结构
//struct ElemType {
//    int data;
//};
//
//typedef struct BiTNode {
//    ElemType data;
//    struct BiTNode* lchild, * rchild;
//} BiTNode, * BiTree;
//
//// 队列节点结构
//typedef struct LinkNode {
//    BiTNode* data;             // 存储树节点的指针
//    struct LinkNode* next;
//} LinkNode;
//
//// 队列结构
//typedef struct {
//    LinkNode* front, * rear;    // 队头队尾
//} LinkQueue;
//
//// 初始化队列
//void InitQueue(LinkQueue* L) {
//    L->front = (LinkNode*)malloc(sizeof(LinkNode));  // 分配头节点
//    if (!L->front) {
//        cerr << "内存分配失败" << endl;
//        exit(-1);
//    }
//    L->front->next = NULL;  // 初始化头节点的 next 指针为 NULL
//    L->rear = L->front;     // rear 指向头节点
//}
//
//// 入队操作
//bool EnQueue(LinkQueue* L, BiTree T) {
//    LinkNode* newNode = (LinkNode*)malloc(sizeof(LinkNode));
//    if (!newNode) {
//        cerr << "内存分配失败" << endl;
//        return false;
//    }
//    newNode->data = T;       // 存储树节点的指针
//    newNode->next = NULL;    // 新节点的 next 指针置为空
//
//    L->rear->next = newNode; // 将新节点插入队尾
//    L->rear = newNode;       // 更新 rear 指针
//    return true;
//}
//
//// 判断队列是否为空
//bool IsEmpty(LinkQueue* L) {
//    return L->front == L->rear;  // 队列为空的条件是 front == rear
//}
//
//// 出队操作
//bool DeQueue(LinkQueue* L, BiTree& T) {
//    if (L->front == L->rear) {  // 队列为空的条件是 front == rear
//        cerr << "队列为空" << endl;
//        return false;
//    }
//    LinkNode* temp = L->front->next;  // 取出队头节点
//    T = temp->data;                   // 将队头节点的数据赋值给 T
//    L->front->next = temp->next;      // 更新队头指针
//    if (L->rear == temp) {            // 如果队列中只有一个节点
//        L->rear = L->front;           // 更新 rear 指针
//    }
//    free(temp);                       // 释放队头节点
//    return true;
//}
//
//// 访问节点
//void visit(BiTree p) {
//    if (p != NULL) {
//        cout << p->data.data << " ";
//    }
//}
//
//// 层序遍历
//void LevelOrder(BiTree T) {
//    LinkQueue Q;
//    InitQueue(&Q);              // 初始化辅助队列
//    BiTree p;
//    EnQueue(&Q, T);             // 将根节点入队
//    while (!IsEmpty(&Q)) {      // 队列不为空则循环
//        DeQueue(&Q, p);         // 队头节点出队
//        visit(p);               // 访问出队节点
//        if (p->lchild != NULL) {
//            EnQueue(&Q, p->lchild);     // 左孩子入队
//        }
//        if (p->rchild != NULL) {
//            EnQueue(&Q, p->rchild);     // 右孩子入队
//        }
//    }
//}
//
//// 创建一个简单的二叉树
//BiTree createTree() {
//    BiTree root = new BiTNode{ 1, NULL, NULL };
//    root->lchild = new BiTNode{ 2, NULL, NULL };
//    root->rchild = new BiTNode{ 3, NULL, NULL };
//    return root;
//}
//void freeTree(BiTree T) {
//    if (T == NULL) return;
//    freeTree(T->lchild);  // 递归释放左子树
//    freeTree(T->rchild);  // 递归释放右子树
//    delete T;             // 释放当前节点
//}
//int main() {
//    BiTree root = createTree();  // 创建一个简单的二叉树
//    cout << "层序遍历结果：";
//    LevelOrder(root);            // 层序遍历
//    cout << endl;
//    freeTree(root);
//    return 0;
//}