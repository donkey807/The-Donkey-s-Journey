////��������˳��洢
//#define MaxSize 100
//
//struct ElemType
//{
//    int value;
//};
//struct TreeNode
//{
//    ElemType value; //����е�����Ԫ��  
//    bool isEmpty;	//����Ƿ�Ϊ��
//};
////��ʼ����T
//bool initTree(TreeNode T[]) {
//    for (int i = 0; i < MaxSize; i++) {
//        T[i].isEmpty = true;     //��ʼ��ʱ���н����Ϊ��
//    }
//    return true;
//}
//
//void test() {
//    struct TreeNode t[MaxSize]; //TreeNode�����ÿ��Ԫ�ض�Ӧһ�����
//    initTree(t);
//}

////�������Ľ��(��ʽ�洢)
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//struct ElemType
//{
//    int data; 
//};
//typedef struct BiTNode {
//    ElemType data;	                    //������
//    struct BiTNode* lchild, * rchild;	//���Һ���ָ��
//}BiTNode, * BiTree;
//
////��ʼ�� ��������
//bool initTree(BiTree& root) {
//    root = (BiTree)malloc(sizeof(BiTNode));
//   
//    if (root == NULL)
//        return false;
//    root->data.data = 1;
//    root->lchild = NULL;
//    root->rchild = NULL;
//    return true;
//}
////����һ�ſ���
//int main()
//{
//    BiTree root = NULL;
//    if (initTree(root))
//    {
//        cout << root->data.data<<endl;
//    }
//
//}