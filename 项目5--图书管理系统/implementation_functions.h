#pragma once
#ifndef _IMPLEMENTATION_FUNCTIONS_H_
#define _IMPLEMENTATION_FUNCTIONS_H_
class BOOK_MANAGEMENT//��֧��ͼ�����
{
public:
	/*1. ����ͼ��
	2. ��ѯͼ�飨֧�ְ� ISBN / ���� / ���߲�ѯ��
	3. �޸�ͼ����Ϣ
	4. ɾ��ͼ��
	5. ��ʾ����ͼ��*/
	void Add_book();
	void Search_book();
	void Modify_book();
	void Delete_book();
	void Display_all_book();
	
};
class BORROWING_MANAGEMENT//��֧�����Ĺ���
{
public:
	/*1. ����ͼ�飨����֤ͼ���Ƿ�ɽ裩
	2. �黹ͼ�飨�����ͼ�����״̬��
	3. ��ѯ���ļ�¼����ͼ�� / �������ˣ�
	*/
	void Borrow_book();
	void Return_book();
	void Search_borrow_record();
	

};
class DATA_MANTENANCE//��֧������ά��
{
public:
	/*1. �������ݣ�����ǰ������Ϣ����Ϊ�ı��ļ���
	2. �ָ����ݣ��ӱ����ļ�������Ϣ�����ǵ�ǰ���ݣ�
	3. ����������ݣ������ȷ�ϣ���ֹ�������
	*/
	void Backup_data();
	void Restore_data();
	void Clear_data();
	
};

#endif // ʵ�ָ�����֧����