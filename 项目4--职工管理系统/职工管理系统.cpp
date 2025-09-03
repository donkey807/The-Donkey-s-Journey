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
		cout << "请输入你的需求" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出管理程序
			wm.exits_system();
			break;
		case 1://增加职工信息
			wm.Add_emp();
			break;
		case 2://显示职工信息
			wm.show_emp();
			break;
		case 3://删除离职职工
			wm.delete_emp();
			break;
		case 4://修改职工信息
			wm.Mood_emp();
			break;
		case 5://查找职工信息
			wm.find_emp();
			break;
		case 6://按照编号排序
			wm.sort_emp();
			break;
		case 7://清空文档内容
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