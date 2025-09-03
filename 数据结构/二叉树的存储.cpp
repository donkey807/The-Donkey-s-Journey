////二叉树的顺序存储
//#define MaxSize 100
//
//struct ElemType
//{
//    int value;
//};
//struct TreeNode
//{
//    ElemType value; //结点中的数据元素  
//    bool isEmpty;	//结点是否为空
//};
////初始化树T
//bool initTree(TreeNode T[]) {
//    for (int i = 0; i < MaxSize; i++) {
//        T[i].isEmpty = true;     //初始化时所有结点标记为空
//    }
//    return true;
//}
//
//void test() {
//    struct TreeNode t[MaxSize]; //TreeNode里面的每个元素对应一个结点
//    initTree(t);
//}

////二叉树的结点(链式存储)
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//struct ElemType
//{
//    int data; 
//};
//typedef struct BiTNode {
//    ElemType data;	                    //数据域
//    struct BiTNode* lchild, * rchild;	//左右孩子指针
//}BiTNode, * BiTree;
//
////初始化 插入根结点
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
////定义一颗空树
//int main()
//{
//    BiTree root = NULL;
//    if (initTree(root))
//    {
//        cout << root->data.data<<endl;
//    }
//
//}