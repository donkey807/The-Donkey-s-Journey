#include"boss.h"
boss::boss(int id, string name, int did)//����employee���캯��
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep_id = did;
}//�����Ա��ֵ
void boss::show_info()
{
	cout << "ְ����ţ�" << this->m_id;
	cout << "\t������" << this->m_name;
	cout << "	\t��λ" << this->m_dep_id;
	cout << "\t��λְ�𣺻�Ǯ" << endl;
}
string boss::get_name()
{
	return string("�ϰ�");
}