////******按位序插入（带头结点）*******
//#include<stdlib.h>
//typedef struct LNode 
//{
//	int data;
//	struct LNode* next;
//
//}LNode,*Linklist;
//bool Listsett(Linklist& L, int i, int e)
//{
//	if (i < 1)
//		return false;
//	LNode* p;
//	int j = 0;
//	p = L;//p指向了L单链的头结点
//	while (p != nullptr && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == nullptr)//p没有成功指向
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
//******按位序插入（不带头结点）******
//#include<stdlib.h>
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//
//}LNode, * Linklist;
//bool Listsett(Linklist& L, int i, int e)
//{
//	if (i < 1)
//		return false;
//	if (i == 1)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;
//		L = s;//刷新单链表
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;//p指向了L单链的头结点
//	while (p != nullptr && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == nullptr)//p没有成功指向
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
////******尾插法******
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//
//}LNode, * Linklist;
//Linklist Tailinsert(Linklist& L)
//{
//	int x;
//	L = (Linklist)malloc(sizeof(LNode));//建立头结点
//	LNode* s, * r = L;
//	cin >> x ;//建立节点的值
//	while (x != 999999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r->next = s;
//		r = s;//r指针指向s节点
//		cin >> x;
//
//	}
//	r->next = NULL;
//	return L;
//}
////******头插法******
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//
//}LNode, * Linklist;
//Linklist Headinsert(Linklist& L)//逆向建立头结点
//{
//	int x;
//	L = (Linklist)malloc(sizeof(LNode));//建立头结点
//	LNode* s;
//	L->next=NULL;
//	cin >> x;//建立节点的值
//	while (x != 999999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x; 
//		s->next = L->next;
//		L->next = s;
//		cin >> x;
//	}
//	return L;
//}
