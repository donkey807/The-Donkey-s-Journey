#pragma once
#include"Worker.h"
class manager : public Worker//�̳�Worker���������
{
public:
	manager(int id, string name, int did);//�����ֵ

	virtual void show_info();


	virtual string get_name();




};