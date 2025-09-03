//#include <iostream>
//using namespace std;
//
//typedef struct ThreadNode {
//    int data;
//    struct ThreadNode* lchild, * rchild;
//    int ltag, rtag;
//} ThreadNode, * ThreadTree;
//
//ThreadNode* pre = NULL;
//
//void visit(ThreadNode* q) {
//    if (q->lchild == NULL) {
//        q->lchild = pre;
//        q->ltag = 1;
//    }
//    if (pre != NULL && pre->rchild == NULL) {
//        pre->rchild = q;
//        pre->rtag = 1;
//    }
//    pre = q;
//}
//
//void InThread(ThreadTree T) {
//    if (T != NULL) {
//        InThread(T->lchild);
//        visit(T);
//        InThread(T->rchild);
//    }
//}
//
//void CreateInThread(ThreadTree T) {
//    pre = NULL;
//    if (T != NULL) {
//        InThread(T);
//        if (pre->rchild == NULL)
//            pre->rtag = 1;
//    }
//}
//
//void visitNode(ThreadNode* p) {
//    cout << p->data << " ";
//}
//
//void InOrderTraverse(ThreadTree T) {
//    ThreadNode* p = T;
//    while (p != NULL) {
//        while (p->ltag == 0) {
//            p = p->lchild;
//        }
//        visitNode(p);
//
//        while (p->rtag == 1 && p->rchild != NULL) {
//            p = p->rchild;
//            visitNode(p);
//        }
//        p = p->rchild;
//    }
//}
//
//int main() {
//    ThreadTree root = new ThreadNode{ 1, NULL, NULL, 0, 0 };
//    root->lchild = new ThreadNode{ 2, NULL, NULL, 0, 0 };
//    root->rchild = new ThreadNode{ 3, NULL, NULL, 0, 0 };
//
//    CreateInThread(root);
//
//    cout << "中序遍历结果：";
//    InOrderTraverse(root);
//    cout << endl;
//
//    // 释放内存
//    delete root->lchild;
//    delete root->rchild;
//    delete root;
//
//    return 0;
//}