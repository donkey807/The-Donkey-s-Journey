#include"boss.h"
boss::boss(int id, string name, int did)//定义employee构造函数
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep_id = did;
}//传入成员初值
void boss::show_info()
{
	cout << "职工编号：" << this->m_id;
	cout << "\t姓名：" << this->m_name;
	cout << "	\t岗位" << this->m_dep_id;
	cout << "\t岗位职责：花钱" << endl;
}
string boss::get_name()
{
	return string("老板");
}