#pragma once//防止头文件名重复
#include<iostream>
#include"Worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();

	//展示菜单
	void show_manu();
	//退出菜单
	void exits_system();
	//成员数
	int m_empnum;
	//统计人数
	int get_empnum();
	//记录成员的身份、
	Worker** m_empArray;
	//添加成员
	void Add_emp();
	//保存文件
	void save();
	//判断文件是否为空
	bool m_fileempty;
	//初始化员工
	void init_emp();
	//显示职工信息
	void show_emp();
	//判断职工是否存在(编号)
	int is_exist1(int id);
	//判断职工是否存在(名字)
	int is_exist2(string name);
	//删除职工信息
	void delete_emp();
	//修改职工信息
	void Mood_emp();
	//查找职工信息
	void find_emp();
	//按照编号排序
	void sort_emp();
	//清空文件
	void clean_emp();
	//析构函数
	~WorkerManager();
};
#include<fstream>
#define FILENAME  "empdfile.txt"