#pragma once//��ֹͷ�ļ����ظ�
#include<iostream>
#include"Worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();

	//չʾ�˵�
	void show_manu();
	//�˳��˵�
	void exits_system();
	//��Ա��
	int m_empnum;
	//ͳ������
	int get_empnum();
	//��¼��Ա����ݡ�
	Worker** m_empArray;
	//��ӳ�Ա
	void Add_emp();
	//�����ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ��
	bool m_fileempty;
	//��ʼ��Ա��
	void init_emp();
	//��ʾְ����Ϣ
	void show_emp();
	//�ж�ְ���Ƿ����(���)
	int is_exist1(int id);
	//�ж�ְ���Ƿ����(����)
	int is_exist2(string name);
	//ɾ��ְ����Ϣ
	void delete_emp();
	//�޸�ְ����Ϣ
	void Mood_emp();
	//����ְ����Ϣ
	void find_emp();
	//���ձ������
	void sort_emp();
	//����ļ�
	void clean_emp();
	//��������
	~WorkerManager();
};
#include<fstream>
#define FILENAME  "empdfile.txt"