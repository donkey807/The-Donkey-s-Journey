#include <iostream>
#include "Display_menu.h"
using namespace std;

void DISPLAY_MENU::Print_main_menu()
{
	cout << "================ ����ͼ�����ϵͳ ================" << endl;
	cout << "1. ͼ������Ӳ˵���" << endl;
	cout << "2. ���Ĺ����Ӳ˵���" << endl;
	cout << "3. ����ά�����Ӳ˵���" << endl;
	cout << "4. �˳�ϵͳ" << endl;
	cout << "==================================================" << endl;
	cout << "����������ѡ��1 - 4����" << endl;
}
void DISPLAY_MENU::Print_book_management()
{
	cout << "================ ͼ����� ================" << endl;
	cout << "1. ����ͼ��" << endl;
	cout << "2. ��ѯͼʾ��֧�ְ�ISBN/����/���߲�ѯ��" << endl;
	cout << "3. �޸�ͼ����Ϣ" << endl;
	cout << "4. ɾ��ͼ��" << endl;
	cout << "5.��ʾ����ͼ��" << endl;
	cout << "6.�������˵�" << endl;
	cout << "==================================================" << endl;
	cout << "����������ѡ��1 - 6����" << endl;
}


void DISPLAY_MENU::Print_borrowing_management()
{
	cout << "================ ���Ĺ��� ================" << endl;
	cout << "1. ����ͼ�飨����֤ͼ���Ƿ�ɽ裩" << endl;
	cout << "2. �黹ͼ�飨�����ͼ�����״̬��" << endl;
	cout << "3. ��ѯ���ļ�¼����ͼ��/�������ˣ�" << endl;
	cout << "4. �������˵�" << endl;
	cout << "==================================================" << endl;
	cout << "����������ѡ��1 - 4����" << endl;
}
void DISPLAY_MENU::Print_data_mantenance()
{
	cout << "================ ����ά�� ================" << endl;
	cout << "1. �������ݣ�����ǰ������Ϣ����Ϊ�ı��ļ���" << endl;
	cout << "2. �ָ����ݣ��ӱ����ļ�������Ϣ�����ǵ�ǰ���ݣ�" << endl;
	cout << "3. ����������ݣ������ȷ�ϣ���ֹ�������" << endl;
	cout << "4. �������˵�" << endl;
	cout << "==================================================" << endl;
	cout << "����������ѡ��1 - 4����" << endl;
}

bool Return_to_main_menu(bool running)
{
	running = false;
	return running;

}

