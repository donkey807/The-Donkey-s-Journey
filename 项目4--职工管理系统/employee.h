#pragma once
#include"Worker.h"
class employee : public Worker//继承Worker抽象类的类
{
public:
	employee(int id, string name, int did);//传入初值

	virtual void show_info();


	virtual string get_name();




};