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
//// ��ʼ������������
//bool initTree(BiTree& root) {
//    root = (BiTree)malloc(sizeof(BiTNode));
//    if (root == NULL) return false;
//    root->data.data = 1;
//    root->lchild = root->rchild = NULL;
//    return true;
//}
//
//// ���� visit ����
//void visit(BiTNode* node) {
//    if (node != NULL) {
//        cout << node->data.data << " ";
//    }
//}
//
//// ǰ�����
//void preOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    visit(root);
//    preOrderTraversal(root->lchild, visit);
//    preOrderTraversal(root->rchild, visit);
//}
//
//// �������
//void inOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    inOrderTraversal(root->lchild, visit);
//    visit(root);
//    inOrderTraversal(root->rchild, visit);
//}
//
//// �������
//void postOrderTraversal(BiTNode* root, void (*visit)(BiTNode*)) {
//    if (root == NULL) return;
//    postOrderTraversal(root->lchild, visit);
//    postOrderTraversal(root->rchild, visit);
//    visit(root);
//}
//int main() {
//    BiTree root = NULL;
//    if (initTree(root)) {
//        // ��������㣨ʾ����
//        root->lchild = (BiTree)malloc(sizeof(BiTNode));
//        root->lchild->data.data = 2;
//        root->lchild->lchild = root->lchild->rchild = NULL;
//
//        root->rchild = (BiTree)malloc(sizeof(BiTNode));
//        root->rchild->data.data = 3;
//        root->rchild->lchild = root->rchild->rchild = NULL;
//
//        cout << "ǰ�������";
//        preOrderTraversal(root, visit);
//        cout << endl;
//
//        cout << "���������";
//        inOrderTraversal(root, visit);
//        cout << endl;
//
//        cout << "���������";
//        postOrderTraversal(root, visit);
//        cout << endl;
//    }
//
//    // �ͷ��ڴ棨ʾ����
//    free(root->lchild);
//    free(root->rchild);
//    free(root);
//
//    return 0;
//}
