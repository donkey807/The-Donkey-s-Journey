//�ȴ��������࣬����������Ŀ�ļܹ�
//�ṩ���ܽӿ�
#include"WorkerManager.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
WorkerManager::WorkerManager()
{
	//�ļ�������ʱ�ĳ�ʼ��
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		this->m_empArray = NULL;
		this->m_empnum = 0;
		this->m_fileempty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ�������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())//eofһ���ַ�Ҳû��
	{
		cout << "�ļ����ڵ��ļ���û������" << endl;
		this->m_empArray = NULL;
		this->m_empnum = 0;
		this->m_fileempty = true;
		ifs.close();
		return;

	}
	//�ļ����ڣ���������
	int num = this->get_empnum();
	cout << "��ǰְ����Ϊ" << num << endl;
	this->m_empnum = num;
	
	this->m_empArray = new Worker * [num];
	this->init_emp();

	for (int i = 0; i < this->m_empnum; i++)
	{
		cout << "ְ�����" << this->m_empArray[i]->m_id << " "
			<< "����" << this->m_empArray[i]->m_name << " "
			<< "��λ" << this->m_empArray[i]->m_dep_id << endl;

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
	cout << "************��ӭʹ��ְ������ϵͳ******" << endl;
	cout << "**************0���˳��������*********" << endl;
	cout << "**************1������ְ����Ϣ*********" << endl;
	cout << "**************2����ʾְ����Ϣ*********" << endl;
	cout << "**************3��ɾ����ְְ��*********" << endl;
	cout << "**************4���޸�ְ����Ϣ*********" << endl;
	cout << "**************5������ְ����Ϣ*********" << endl;
	cout << "**************6�����ձ������*********" << endl;
	cout << "**************7������ĵ�����*********" << endl;
	cout << "**************************************" << endl;
}
void WorkerManager::exits_system()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}

void WorkerManager::Add_emp()
{
	cout << "���������ְ������" << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//��������¿ռ�Ĵ�С
		int newSize = this->m_empnum + addnum;
		Worker** newspace = new Worker * [newSize];
		//����������Ѿ����˳�Ա���ȿ�����������newspace
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
			cout << "�������"<<i+1<<"��Ա���ı��" << endl;
			cin >> id;
			cout << "�������"<<i+1<<"��Ա��������" << endl;
			cin >> name;
			cout << "�������"<<i+1<<"��Ա���ĸ�λ" << endl;
			cout << "1��ְ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
				cout << "��������ȷ��ְλ" << endl;
				continue;
			}
			newspace[this->m_empnum + i] = worker;
		}
		delete[]this->m_empArray;
		this->m_empArray = newspace;
		this->m_empnum = newSize;
		this->m_fileempty = false;
		cout << "�ɹ����" << this->m_empnum << "��ְ��" << endl;
		save();
	
	}
	else
	{
		cout << "�����д���";
	}
	system("puase");
	system("cls");

}
void WorkerManager::save()//�����ļ�
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

		cout << "�ļ�������" << endl;
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
int WorkerManager::is_exist2(string name)//�����鵽ְ�����
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
		cout << "�ļ�������" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ�����" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_exist1(id);
		if (index != -1)//�����Ա�����
		{
			for (int i = index; i < this->m_empnum - 1; i++)
			{
				this->m_empArray[i] = this->m_empArray[i + 1];

				//����ǰ�� ����

			}
			this->m_empnum--;
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}

		else
		{
			cout << "û�и�ְ�����" << endl;
		}

	}
}
void WorkerManager::Mood_emp()
{
	if (this->m_fileempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ�����" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_exist1(id);
		if (index != -1)//�����Ա�����
		{
			delete this->m_empArray[index];
			int newid = 0;
			string newname = "";
			int newdid = 0;
			cout << "�鵽��" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newid;
			cout << "�������µ�����" << endl;
			cin >> newname;
			cout << "�������µ�ְλ" << endl;
			cout << "1��ְ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
				cout << "û�иø�λ���޸�ʧ��" << endl;
				break;
			}
			this->m_empArray[index] = worker;
			cout << "�޸ĳɹ�" << endl;
			this->save();
		}
		else
		{
			cout << "û�����ְ����Ϣ" << endl;
		}
		system("pause");
		system("cls");
	}
}
void WorkerManager::find_emp()
{
	if (this->m_fileempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫ���ҵ�ְ����Ż�������,����ְ���������1��������������2" << endl;
		int i=0;
		cin >> i;
		switch (i)
		{

		case 1:
		{
			cout << "��������Ҫ���ҵ�ְ�����" << endl;
			int id = 0;
			cin >> id;
			int index = this->is_exist1(id);
			if (index != -1)//�����Ա�����
			{
				cout << this->m_empArray[index]->m_id << " "
					<< this->m_empArray[index]->m_name << " "
					<< this->m_empArray[index]->m_dep_id << endl;
			}
			else
			{
				cout << "û�����ְ����Ϣ" << endl;
			}
			system("pause");
			system("cls");

		}
		case 2:
		{
			cout << "��������Ҫ���ҵ�����" << endl;
			string name = "";
			cin >> name;
			int index = this->is_exist2(name);//�õ�ְ�����
			int index_t = this->is_exist1(index);
			if (index != -1)//�����Ա�����
			{
				cout << this->m_empArray[index]->m_id << " "
					<< this->m_empArray[index]->m_name << " "
					<< this->m_empArray[index]->m_dep_id << endl;
			}
			else
			{
				cout << "û�����ְ����Ϣ" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫ������ʽ" << endl;
		cout << "����Ϊ1������Ϊ2" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_empnum; i++)
		{
			int minormax = i;
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_empArray[i]->m_id > this->m_empArray[j]->m_id)
						minormax = j;
				}
				else if (select == 2)//����
				{
					if (this->m_empArray[i]->m_id < this->m_empArray[j]->m_id)
						minormax = j;
				}
				else
				{
					cout << "û���������򣡣���" << endl;
				}

			}
			if (i != minormax)
			{
				Worker* temp = this->m_empArray[i];
				this->m_empArray[i] = this->m_empArray[minormax];
				this->m_empArray[minormax] = temp;


			}



		}
		cout << "����ɹ�" << endl;
		this->save();
	}
}
void WorkerManager::clean_emp()
{
	int select = 0;
	cout << "�Ƿ�����ļ���" << endl;
	cout << "1��ȷ�ϣ�2������" << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
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
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");

}





