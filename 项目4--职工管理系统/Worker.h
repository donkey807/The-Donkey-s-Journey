#pragma once//��ֹͷ�ļ����ظ�
#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:

	virtual void show_info() = 0;//���麯������Ϊ������
	virtual string get_name() = 0;

	int m_id = 0;//ְ�����
	string m_name = " ";//����
	int m_dep_id = 0;//���ڲ������Ʊ��
};