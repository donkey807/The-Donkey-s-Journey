////******��λ����루��ͷ��㣩*******
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
//	p = L;//pָ����L������ͷ���
//	while (p != nullptr && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == nullptr)//pû�гɹ�ָ��
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
//******��λ����루����ͷ��㣩******
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
//		L = s;//ˢ�µ�����
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;//pָ����L������ͷ���
//	while (p != nullptr && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == nullptr)//pû�гɹ�ָ��
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
////******β�巨******
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
//	L = (Linklist)malloc(sizeof(LNode));//����ͷ���
//	LNode* s, * r = L;
//	cin >> x ;//�����ڵ��ֵ
//	while (x != 999999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r->next = s;
//		r = s;//rָ��ָ��s�ڵ�
//		cin >> x;
//
//	}
//	r->next = NULL;
//	return L;
//}
////******ͷ�巨******
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//
//}LNode, * Linklist;
//Linklist Headinsert(Linklist& L)//������ͷ���
//{
//	int x;
//	L = (Linklist)malloc(sizeof(LNode));//����ͷ���
//	LNode* s;
//	L->next=NULL;
//	cin >> x;//�����ڵ��ֵ
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
