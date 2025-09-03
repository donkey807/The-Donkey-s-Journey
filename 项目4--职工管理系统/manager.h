#pragma once
#include"Worker.h"
class manager : public Worker//继承Worker抽象类的类
{
public:
	manager(int id, string name, int did);//传入初值

	virtual void show_info();


	virtual string get_name();




};