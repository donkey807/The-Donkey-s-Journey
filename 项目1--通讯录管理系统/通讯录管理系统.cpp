#include<iostream>
#include <string.h>
#include "AddressBookSystem.h"
using namespace std;


int main(void)
{
    AddressBookSystem absystem;//定义类对象
    
    AddressBookSystem::Addressbooks addressbooks;//定义通讯录结构体变量
    addressbooks.arr.resize(1000);//动态分配1000个空间

    addressbooks.m_size = 0;//初始化通讯录，即通讯录内为0人
    int select;
	bool running = true;//程序运行标志
    while (running)
    {
        absystem.ShowMenu();
		cout << "请选择操作功能：";
        cin >> select;
        switch (select)
        {
        case 1://1添加联系人
            absystem.addPerson(&addressbooks);
            break;
        case 2://2显示联系人
            absystem.showPerson(&addressbooks);
            break;
        case 3://3删除联系人   按照姓名来操作
            absystem.deletePerson(&addressbooks);
            break;
        case 4://4查找联系人
            absystem.findPerson(&addressbooks);
            break;
        case 5://5修改联系人
            absystem.modifyPerson(&addressbooks);
            break;
        case 6://6清空联系人
            absystem.cleanPerson(&addressbooks);
            break;
        case 0://0退出通讯录
            running = false;//停止循环（退出程序）
            cout << "欢迎下次使用";
            return 0;

        default:
            break;
        }
    }
    return 0;
}