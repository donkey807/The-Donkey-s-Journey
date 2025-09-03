//******双链表******
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//typedef struct DNode
//{
//	int data;
//	struct DNode* next;
//	struct DNode* prior;
//
//
//}LNode, * DLinklist;
////初始化双链表、
//bool InitLinklist(DLinklist& L)
//{
//	L = (DNode*)malloc(sizeof(DNode));//分配一个头结点
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->next = NULL;
//	L->prior = NULL;
//	return true;
//}
////双链表的插入
//bool Insertnextdnode(DNode* p, DNode* s)
//{
//	if (p == NULL || s == NULL)
//	{
//		return false;
//	}
//	s->next = p->next;
//	if (p->next != NULL)//p结点不是最后一个结点
//	{
//		p->next->prior = s;
//	}
//	s->prior = p;
//	p->next = s;
//	return true;
//}
////双链表结点p的后继结点的删除
//bool Deletenextdnode(DNode* p)
//{
//	if (p == NULL||p->next==NULL)//判断是否为空
//	{
//		return false;
//	}//没
//	DNode* q = p->next;
//	p->next = q->next;
//	if (q->next != NULL)//判断q后还有结点
//	{
//		q->next->prior = p;
//	}
//	free(q);
//	return true;
//}
////双链表的前遍历
//void FromHead(DLinklist&L)
//{
//	DNode* p = L->next;
//	while (p != NULL)
//	{
//		cout << p->data<<"  ";
//		p = p->next;
//	}
//}
////双链表的后遍历
//void FromOver(DLinklist& L)
//{
//	if (L == NULL || L->next == NULL) {
//		cout << "链表为空！" << endl;
//		return;
//	}
//	DNode* p = L;
//	while (p->next != NULL)//确保是最后一个结点
//	{
//		p = p->next;
//	}
//	while (p->prior!= NULL)
//	{
//		cout << p->data<<"  ";
//		p = p->prior;
//	}
//}
//int main()
//{
//	DLinklist L;
//	if (!InitLinklist(L))
//	{
//		cerr << "初始化失败" << endl;
//		return -1;
//	}
//	int n;
//	cout << "请输入你要的结点个数" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		DNode *s=(DNode*)malloc(sizeof(DNode));
//		if (s == NULL)
//		{
//			cerr << "内存分配失败了" << endl;
//			return -1;
//		}
//		cout << "请输入你的第" << i << "个结点内容" << endl;
//		cin >> s->data;
//		if (!Insertnextdnode(L, s))
//		{
//			cerr << "插入结点失败" << endl;
//			free(s);
//		}
//		
//	}
//	cout << "链表内容（从前向后）: ";
//	FromHead(L);
//
//	cout << "链表内容（从后向前）: ";
//	FromOver(L);
//
//	// 删除第一个节点的后继节点
//	if (Deletenextdnode(L)) {
//		cout << "删除第一个节点的后继节点成功！" << endl;
//	}
//	else {
//		cout << "删除失败，链表为空或只有一个节点！" << endl;
//	}
//
//	cout << "删除后链表内容（从前向后）: ";
//	FromHead(L);
//
//	return 0;
//}
