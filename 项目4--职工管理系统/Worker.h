#pragma once//防止头文件名重复
#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:

	virtual void show_info() = 0;//纯虚函数，类为抽象类
	virtual string get_name() = 0;

	int m_id = 0;//职工编号
	string m_name = " ";//姓名
	int m_dep_id = 0;//所在部门名称编号
};