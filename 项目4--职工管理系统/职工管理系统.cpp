 #include<iostream>
#include"WorkerManager.h"
#include"Worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
using namespace std;
int main()
{
	
	WorkerManager wm;
	while (true)
	{
		wm.show_manu();
		int choice;
		cout << "�������������" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳��������
			wm.exits_system();
			break;
		case 1://����ְ����Ϣ
			wm.Add_emp();
			break;
		case 2://��ʾְ����Ϣ
			wm.show_emp();
			break;
		case 3://ɾ����ְְ��
			wm.delete_emp();
			break;
		case 4://�޸�ְ����Ϣ
			wm.Mood_emp();
			break;
		case 5://����ְ����Ϣ
			wm.find_emp();
			break;
		case 6://���ձ������
			wm.sort_emp();
			break;
		case 7://����ĵ�����
			wm.clean_emp();
			break;
		default:

			system("cls");
			break;
		}

	}
	system("pause");
	return 0;
}