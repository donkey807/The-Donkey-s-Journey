#pragma once
#include"Worker.h"
class boss : public Worker//继承Worker抽象类的类
{
public:
	boss(int id, string name, int did);//传入初值

	virtual void show_info();


	virtual string get_name();




};
