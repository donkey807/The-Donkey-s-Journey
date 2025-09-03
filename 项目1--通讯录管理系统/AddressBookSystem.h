#pragma once
#include<string>
#include <vector>
#ifndef _ADDRESSBOOKSYSTEM_H_
#define _ADDRESSBOOKSYSTEM_H_
#define MAX 1000

class AddressBookSystem//ͨѶ¼����ϵͳ��
{
public:
     //�����ڲ��ṹ�壬�����ڲ�ʹ��
    //��ϵ��
    struct People
    {
        std::string m_name;
        int m_sex;       // 0��ʾ�У�1��ʾŮ
        int m_age;
        std::string m_phone;
        std::string m_addr;
    };

    // ͨѶ¼�ṹ
    struct Addressbooks
    {
        //
        std::vector<People> arr;//vector���Ϲ�������
        //People arr[1000];  // �洢��ϵ��  //����1000�ڴ�ռ�ù��󣬸���vector��̬����
		int m_size;  // ��¼��ǰͨѶ¼����Ա�ĸ���
        // ����ʱ��ʼ������
        Addressbooks()
        {
			arr.reserve(1000);//Ԥ��1000���ռ�
			m_size = 0;
        }
    };


     //���Ա��������
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
