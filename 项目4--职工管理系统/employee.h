#pragma once
#include"Worker.h"
class employee : public Worker//�̳�Worker���������
{
public:
	employee(int id, string name, int did);//�����ֵ

	virtual void show_info();


	virtual string get_name();




};