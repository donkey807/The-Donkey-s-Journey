//#include <iostream>
//using namespace std;
//struct ElemType 
//{
//    int data;
//};
//
//typedef struct BiTNode {
//    ElemType data;
//    struct BiTNode* lchild, * rchild;
//} BiTNode, * BiTree;
//
//// 初始化并插入根结点
//bool initTree(BiTree& root) {
//    root = (BiTree)malloc(sizeof(BiTNode));
//    if (root == NULL) return false;
//    root->data.data = 1;
//    root->lchild = root->rchild = NULL;
//    return true;
//}
//
//// 定义 visit 函数
//void visit(BiTNode* node) {
//    if (node != NULL) {
//        cout << node->data.data << " ";
//    }
//}
//
//// 前序遍历
//void preOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    visit(root);
//    preOrderTraversal(root->lchild, visit);
//    preOrderTraversal(root->rchild, visit);
//}
//
//// 中序遍历
//void inOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    inOrderTraversal(root->lchild, visit);
//    visit(root);
//    inOrderTraversal(root->rchild, visit);
//}
//
//// 后序遍历
//void postOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    postOrderTraversal(root->lchild, visit);
//    postOrderTraversal(root->rchild, visit);
//    visit(root);
//}
//int main() {
//    BiTree root = NULL;
//    if (initTree(root)) {
//        // 插入更多结点（示例）
//        root->lchild = (BiTree)malloc(sizeof(BiTNode));
//        root->lchild->data.data = 2;
//        root->lchild->lchild = root->lchild->rchild = NULL;
//
//        root->rchild = (BiTree)malloc(sizeof(BiTNode));
//        root->rchild->data.data = 3;
//        root->rchild->lchild = root->rchild->rchild = NULL;
//
//        cout << "前序遍历：";
//        preOrderTraversal(root, visit);
//        cout << endl;
//
//        cout << "中序遍历：";
//        inOrderTraversal(root, visit);
//        cout << endl;
//
//        cout << "后序遍历：";
//        postOrderTraversal(root, visit);
//        cout << endl;
//    }
//
//    // 释放内存（示例）
//    free(root->lchild);
//    free(root->rchild);
//    free(root);
//
//    return 0;
//}
