#pragma once
#include"Worker.h"
class boss : public Worker//�̳�Worker���������
{
public:
	boss(int id, string name, int did);//�����ֵ

	virtual void show_info();


	virtual string get_name();




};
