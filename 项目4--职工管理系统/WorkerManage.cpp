//先创建管理类，管理整个项目的架构
//提供功能接口
#include"WorkerManager.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
WorkerManager::WorkerManager()
{
	//文件不存在时的初始化
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_empArray = NULL;
		this->m_empnum = 0;
		this->m_fileempty = true;
		ifs.close();
		return;
	}
	//文件存在，但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())//eof一个字符也没有
	{
		cout << "文件存在但文件里没有内容" << endl;
		this->m_empArray = NULL;
		this->m_empnum = 0;
		this->m_fileempty = true;
		ifs.close();
		return;

	}
	//文件存在，且有内容
	int num = this->get_empnum();
	cout << "当前职工数为" << num << endl;
	this->m_empnum = num;
	
	this->m_empArray = new Worker * [num];
	this->init_emp();

	for (int i = 0; i < this->m_empnum; i++)
	{
		cout << "职工编号" << this->m_empArray[i]->m_id << " "
			<< "姓名" << this->m_empArray[i]->m_name << " "
			<< "岗位" << this->m_empArray[i]->m_dep_id << endl;

	}
}
WorkerManager::~WorkerManager()
{
	if (this->m_empArray != NULL)
	{
		delete[]this->m_empArray;
		this->m_empArray = NULL;

		  
	}
}

void WorkerManager::show_manu()
{
	cout << "**************************************" << endl;
	cout << "************欢迎使用职工管理系统******" << endl;
	cout << "**************0：退出管理程序*********" << endl;
	cout << "**************1：增加职工信息*********" << endl;
	cout << "**************2：显示职工信息*********" << endl;
	cout << "**************3：删除离职职工*********" << endl;
	cout << "**************4：修改职工信息*********" << endl;
	cout << "**************5：查找职工信息*********" << endl;
	cout << "**************6：按照编号排序*********" << endl;
	cout << "**************7：清空文档内容*********" << endl;
	cout << "**************************************" << endl;
}
void WorkerManager::exits_system()
{
	cout << "欢迎下次使用" << endl;
	exit(0);
}

void WorkerManager::Add_emp()
{
	cout << "请输入添加职工数量" << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//计算添加新空间的大小
		int newSize = this->m_empnum + addnum;
		Worker** newspace = new Worker * [newSize];
		//如果数组里已经有了成员，先拷贝下来放入newspace
		if (this->m_empArray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_empArray[i];
			}
		}
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dselect;
			cout << "请输入第"<<i+1<<"个员工的编号" << endl;
			cin >> id;
			cout << "请输入第"<<i+1<<"个员工的姓名" << endl;
			cin >> name;
			cout << "请输入第"<<i+1<<"个员工的岗位" << endl;
			cout << "1，职工" << endl;
			cout << "2，经理" << endl;
			cout << "3，老板" << endl;
			cin >> dselect;
			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new employee(id, name, 1);
				break;
			case 2:
				worker = new manager(id, name, 2);
				break;
			case 3:
				worker = new boss(id, name, 3);
				break;
			default:
				cout << "请输入正确的职位" << endl;
				continue;
			}
			newspace[this->m_empnum + i] = worker;
		}
		delete[]this->m_empArray;
		this->m_empArray = newspace;
		this->m_empnum = newSize;
		this->m_fileempty = false;
		cout << "成功添加" << this->m_empnum << "名职工" << endl;
		save();
	
	}
	else
	{
		cout << "输入有错误";
	}
	system("puase");
	system("cls");

}
void WorkerManager::save()//保存文件
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_empArray[i]->m_id << " "
			<< this->m_empArray[i]->m_name << " "
			<< this->m_empArray[i]->m_dep_id << endl;


	}
	ofs.close();

}

void WorkerManager::init_emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;
	int index=0;

	while (ifs >> id >> name >> did)
	{
		Worker* worker = NULL;
		if (did == 1)
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2)
		{
			worker = new manager(id, name, did);
		}
		else if (did == 3)
		{
			worker = new boss(id, name, did);
		}
		this->m_empArray[index++] = worker;
	 
	}
	ifs.close();
}
int WorkerManager::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}
void WorkerManager::show_emp()
{
	int num=this->get_empnum();
	if (this->m_fileempty)
	{

		cout << "文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			this->m_empArray[i]->show_info();

		}
	}
	system("pause");
	system("cls");	
}
int WorkerManager::is_exist1(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_empArray[i]->m_id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}
int WorkerManager::is_exist2(string name)//姓名查到职工编号
{
	int index = -1;

	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_empArray[i]->m_name == name)
		{
			index = this->m_empArray[i]->m_id;
			break;
		}
	}
	return index;
}
void WorkerManager::delete_emp()
{
	if (this->m_fileempty)
	{
		cout << "文件不存在" << endl;
	}
	else
	{
		cout << "请输入想要删除的职工编号" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_exist1(id);
		if (index != -1)//有这个员工编号
		{
			for (int i = index; i < this->m_empnum - 1; i++)
			{
				this->m_empArray[i] = this->m_empArray[i + 1];

				//数据前移 覆盖

			}
			this->m_empnum--;
			this->save();
			cout << "删除成功" << endl;
		}

		else
		{
			cout << "没有该职工编号" << endl;
		}

	}
}
void WorkerManager::Mood_emp()
{
	if (this->m_fileempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入想要修改的职工编号" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_exist1(id);
		if (index != -1)//有这个员工编号
		{
			delete this->m_empArray[index];
			int newid = 0;
			string newname = "";
			int newdid = 0;
			cout << "查到：" << id << "号职工，请输入新的职工号：" << endl;
			cin >> newid;
			cout << "请输入新的姓名" << endl;
			cin >> newname;
			cout << "请输入新的职位" << endl;
			cout << "1，职工" << endl;
			cout << "2，经理" << endl;
			cout << "3，老板" << endl;
			cin >> newdid;
			Worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new employee(newdid, newname, newdid);
				break;
			case 2:
				worker = new manager(newdid, newname, newdid);
				break;
			case 3:
				worker = new boss(newdid, newname, newdid);
				break;
			default:
				cout << "没有该岗位，修改失败" << endl;
				break;
			}
			this->m_empArray[index] = worker;
			cout << "修改成功" << endl;
			this->save();
		}
		else
		{
			cout << "没有这个职工信息" << endl;
		}
		system("pause");
		system("cls");
	}
}
void WorkerManager::find_emp()
{
	if (this->m_fileempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入你要查找的职工编号或是姓名,查找职工编号输入1；查找姓名输入2" << endl;
		int i=0;
		cin >> i;
		switch (i)
		{

		case 1:
		{
			cout << "请输入想要查找的职工编号" << endl;
			int id = 0;
			cin >> id;
			int index = this->is_exist1(id);
			if (index != -1)//有这个员工编号
			{
				cout << this->m_empArray[index]->m_id << " "
					<< this->m_empArray[index]->m_name << " "
					<< this->m_empArray[index]->m_dep_id << endl;
			}
			else
			{
				cout << "没有这个职工信息" << endl;
			}
			system("pause");
			system("cls");

		}
		case 2:
		{
			cout << "请输入想要查找的姓名" << endl;
			string name = "";
			cin >> name;
			int index = this->is_exist2(name);//得到职工编号
			int index_t = this->is_exist1(index);
			if (index != -1)//有这个员工编号
			{
				cout << this->m_empArray[index]->m_id << " "
					<< this->m_empArray[index]->m_name << " "
					<< this->m_empArray[index]->m_dep_id << endl;
			}
			else
			{
				cout << "没有这个职工信息" << endl;
			}
			system("pause");
			system("cls");
		}
		}
	}
}
void WorkerManager::sort_emp()
{
	if (this->m_fileempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入你要的排序方式" << endl;
		cout << "升序为1；降序为2" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_empnum; i++)
		{
			int minormax = i;
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_empArray[i]->m_id > this->m_empArray[j]->m_id)
						minormax = j;
				}
				else if (select == 2)//降序
				{
					if (this->m_empArray[i]->m_id < this->m_empArray[j]->m_id)
						minormax = j;
				}
				else
				{
					cout << "没有这种排序！！！" << endl;
				}

			}
			if (i != minormax)
			{
				Worker* temp = this->m_empArray[i];
				this->m_empArray[i] = this->m_empArray[minormax];
				this->m_empArray[minormax] = temp;


			}



		}
		cout << "排序成功" << endl;
		this->save();
	}
}
void WorkerManager::clean_emp()
{
	int select = 0;
	cout << "是否清空文件？" << endl;
	cout << "1：确认；2：返回" << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//删除文件在重新创建
		ofs.close();
		if (this->m_empArray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_empArray[i];
				this->m_empArray[i];
			}
			delete[] this->m_empArray;
			this->m_empnum = 0;
			this->m_empArray = NULL;
			this->m_fileempty = true;
		}
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");

}





