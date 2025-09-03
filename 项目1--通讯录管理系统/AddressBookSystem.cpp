#include "AddressBookSystem.h"
#include <iostream>
//显示菜单
void AddressBookSystem::ShowMenu()
{
    std::cout << "*********************\n";
    std::cout << "*****1添加联系人*****\n";
    std::cout << "*****2显示联系人*****\n";
    std::cout << "*****3删除联系人*****\n";
    std::cout << "*****4查找联系人*****\n";
    std::cout << "*****5修改联系人*****\n";
    std::cout << "*****6清空联系人*****\n";
    std::cout << "*****0退出通讯录*****\n";
    std::cout << "*********************\n";
}

void AddressBookSystem::addPerson(Addressbooks* abs)//添加联系人函数
{
    
    if (abs->m_size == MAX)
    {
        std::cout << "通讯录已经满了";
        return;
    }
    else
    {
        std::string name;
        std::cout << "请输入姓名";
        std::cin >> name;
        abs->arr[abs->m_size].m_name = name;

        std::cout << "请输入性别";
        std::cout << "1--男";
        std::cout << "2--女";
        int sex = 0;
        while (true) //用while循环，如果不输入1或2，不跳出，直到输入正确
        {
            std::cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->arr[abs->m_size].m_sex = sex;
                break;
            }
            std::cout << "请输入正确的性别";
        }

        int age = 0;
        std::cout << "请输入年龄";
        std::cin >> age;
        abs->arr[abs->m_size].m_age = age;

        std::string phone;
        std::cout << "请输入电话";
        std::cin >> phone;
        abs->arr[abs->m_size].m_phone = phone;

        std::string address;
        std::cout << "请输入住址";
        std::cin >> address;
        abs->arr[abs->m_size].m_addr = address;
        
        std::cout << "添加成功";
        abs->m_size++;
        system("pause");
        system("cls");
    }
}
void AddressBookSystem::showPerson(Addressbooks* abs)
{
    if (abs->m_size == 0)
    {
        std::cout << "你没有联系人";
    }
    else
    {
        for (int i = 0; i < abs->m_size; i++)
        {
            std::cout << "姓名为：" << abs->arr[i].m_name << "\t";
            std::cout << "性别为：" << (abs->arr[i].m_sex == 1 ? "男" : "女") << "\t";
            std::cout << "年龄为：" << abs->arr[i].m_age << "\t";
            std::cout << "电话为" << abs->arr[i].m_phone << "\t";
            std::cout << "住址为：" << abs->arr[i].m_addr << "\t";
            std::cout << "\n";
        }
    }
    system("pause");
    system("cls");

}

int AddressBookSystem::searchPerson(Addressbooks* abs, std::string name)//name是我输入想查找的姓名
{
    for (int i = 0; i < abs->m_size; i++)
	{
        if (abs->arr[i].m_name == name)//找到对应的身份信息
        {
            return i;//返回该姓名在数组中的位置序号
        }
    }
    return -1;//没找到
}


void AddressBookSystem::deletePerson(Addressbooks* abs)//通过数组数据整体前移覆盖删除的数据，同时m_size-1
{
    std::cout << "请输入你要删除的联系人名称";
    std::string name;
    std::cin >> name;
    int ret1 = searchPerson(abs, name);
    if (ret1 != -1)
    {
        for (int i = ret1; i < abs->m_size - 1; i++)
        {
            abs->arr[i] = abs->arr[i + 1];//覆盖删除成员内容
        }
        abs->m_size--;//更新通讯录成员数目
        std::cout << "删除成功";
    }
    else
    {
        std::cout << "没有该联系人";
    }
}
void AddressBookSystem::findPerson(Addressbooks* abs)
{
    std::cout << "请输入你要查找的联系人名称";
    std::string name;
    std::cin >> name;
    int ret2 = searchPerson(abs, name);//返回的是该成员在数组中的位置序号
    if (ret2 != -1)//有这个人
    {

        std::cout << "姓名为：" << abs->arr[ret2].m_name << "\t";
        std::cout << "性别为：" << (abs->arr[ret2].m_sex == 1 ? "男" : "女") << "\t";
        std::cout << "年龄为：" << abs->arr[ret2].m_age << "\t";
        std::cout << "电话为" << abs->arr[ret2].m_phone << "\t";
        std::cout << "住址为：" << abs->arr[ret2].m_addr << "\t";
        std::cout << "\n";
    }
    else
    {
        std::cout << "查无此人";
    }
}

void AddressBookSystem::modifyPerson(Addressbooks* abs)
{
    std::cout << "请输入你要修改的联系人名称";
    std::string name;
    std::cin >> name;
    int ret2 = searchPerson(abs, name);
    if (ret2 != -1)
    {
        std::string name;
        std::cout << "请输入姓名";
        std::cin >> name;
        abs->arr[ret2].m_name = name;

        std::cout << "请输入性别";
        std::cout << "1--男";
        std::cout << "2--女";
        int sex = 0;
        while (true) //用while循环，如果不输入1或2，不跳出，直到输入正确
        {
            std::cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->arr[ret2].m_sex = sex;
                break;
            }
            std::cout << "请输入正确的性别";
        }

        int age = 0;
        std::cout << "请输入年龄";
        std::cin >> age;
        abs->arr[ret2].m_age = age;

        std::string phone;
        std::cout << "请输入电话";
        std::cin >> phone;
        abs->arr[ret2].m_phone = phone;

        std::string address;
        std::cout << "请输入住址";
        std::cin >> address;
        abs->arr[ret2].m_addr = address;

        std::cout << "修改成功";

        system("pause");
        system("cls");
    }

}
void AddressBookSystem::cleanPerson(Addressbooks* abs)
{
    abs->m_size = 0;
    std::cout << "通讯录已清空";
    system("pause");
    system("cls");
}
