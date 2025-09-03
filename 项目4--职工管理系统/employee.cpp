#include"employee.h"
employee::employee(int id, string name, int did)//定义employee构造函数
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep_id = did;
}//传入成员初值
void employee::show_info()
{
	cout << "职工编号：" << this->m_id;
	cout << "\t姓名：" << this->m_name;
	cout << "	\t岗位" << this->m_dep_id;
	cout << "\t岗位职责：完成经理给的任务" << endl;
}
string employee::get_name()
{
	return string("员工");
}