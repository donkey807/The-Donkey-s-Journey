//******˫����******
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
////��ʼ��˫����
//bool InitLinklist(DLinklist& L)
//{
//	L = (DNode*)malloc(sizeof(DNode));//����һ��ͷ���
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->next = NULL;
//	L->prior = NULL;
//	return true;
//}
////˫����Ĳ���
//bool Insertnextdnode(DNode* p, DNode* s)
//{
//	if (p == NULL || s == NULL)
//	{
//		return false;
//	}
//	s->next = p->next;
//	if (p->next != NULL)//p��㲻�����һ�����
//	{
//		p->next->prior = s;
//	}
//	s->prior = p;
//	p->next = s;
//	return true;
//}
////˫������p�ĺ�̽���ɾ��
//bool Deletenextdnode(DNode* p)
//{
//	if (p == NULL||p->next==NULL)//�ж��Ƿ�Ϊ��
//	{
//		return false;
//	}//û
//	DNode* q = p->next;
//	p->next = q->next;
//	if (q->next != NULL)//�ж�q���н��
//	{
//		q->next->prior = p;
//	}
//	free(q);
//	return true;
//}
////˫�����ǰ����
//void FromHead(DLinklist&L)
//{
//	DNode* p = L->next;
//	while (p != NULL)
//	{
//		cout << p->data<<"  ";
//		p = p->next;
//	}
//}
////˫����ĺ����
//void FromOver(DLinklist& L)
//{
//	if (L == NULL || L->next == NULL) {
//		cout << "����Ϊ�գ�" << endl;
//		return;
//	}
//	DNode* p = L;
//	while (p->next != NULL)//ȷ�������һ�����
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
//		cerr << "��ʼ��ʧ��" << endl;
//		return -1;
//	}
//	int n;
//	cout << "��������Ҫ�Ľ�����" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		DNode *s=(DNode*)malloc(sizeof(DNode));
//		if (s == NULL)
//		{
//			cerr << "�ڴ����ʧ����" << endl;
//			return -1;
//		}
//		cout << "��������ĵ�" << i << "���������" << endl;
//		cin >> s->data;
//		if (!Insertnextdnode(L, s))
//		{
//			cerr << "������ʧ��" << endl;
//			free(s);
//		}
//		
//	}
//	cout << "�������ݣ���ǰ���: ";
//	FromHead(L);
//
//	cout << "�������ݣ��Ӻ���ǰ��: ";
//	FromOver(L);
//
//	// ɾ����һ���ڵ�ĺ�̽ڵ�
//	if (Deletenextdnode(L)) {
//		cout << "ɾ����һ���ڵ�ĺ�̽ڵ�ɹ���" << endl;
//	}
//	else {
//		cout << "ɾ��ʧ�ܣ�����Ϊ�ջ�ֻ��һ���ڵ㣡" << endl;
//	}
//
//	cout << "ɾ�����������ݣ���ǰ���: ";
//	FromHead(L);
//
//	return 0;
//}
