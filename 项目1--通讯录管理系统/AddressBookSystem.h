#pragma once
#include<string>
#include <vector>
#ifndef _ADDRESSBOOKSYSTEM_H_
#define _ADDRESSBOOKSYSTEM_H_
#define MAX 1000

class AddressBookSystem//通讯录管理系统类
{
public:
     //定义内部结构体，供类内部使用
    //联系人
    struct People
    {
        std::string m_name;
        int m_sex;       // 0表示男，1表示女
        int m_age;
        std::string m_phone;
        std::string m_addr;
    };

    // 通讯录结构
    struct Addressbooks
    {
        //
        std::vector<People> arr;//vector堆上管理数据
        //People arr[1000];  // 存储联系人  //数组1000内存占用过大，改用vector动态处理
		int m_size;  // 记录当前通讯录中人员的个数
        // 构造时初始化容量
        Addressbooks()
        {
			arr.reserve(1000);//预留1000个空间
			m_size = 0;
        }
    };


     //类成员函数声明
    void ShowMenu();
    void addPerson(Addressbooks* abs);
    void showPerson(Addressbooks* abs);
    int searchPerson(Addressbooks* abs, std::string name);
    void deletePerson(Addressbooks* abs);
    void findPerson(Addressbooks* abs);
    void modifyPerson(Addressbooks* abs);
    void cleanPerson(Addressbooks* abs);

};

#endif  // _ADDRESSBOOKSYSTEM_H_
