#include "AddressBookSystem.h"
#include <iostream>
//��ʾ�˵�
void AddressBookSystem::ShowMenu()
{
    std::cout << "*********************\n";
    std::cout << "*****1�����ϵ��*****\n";
    std::cout << "*****2��ʾ��ϵ��*****\n";
    std::cout << "*****3ɾ����ϵ��*****\n";
    std::cout << "*****4������ϵ��*****\n";
    std::cout << "*****5�޸���ϵ��*****\n";
    std::cout << "*****6�����ϵ��*****\n";
    std::cout << "*****0�˳�ͨѶ¼*****\n";
    std::cout << "*********************\n";
}

void AddressBookSystem::addPerson(Addressbooks* abs)//�����ϵ�˺���
{
    
    if (abs->m_size == MAX)
    {
        std::cout << "ͨѶ¼�Ѿ�����";
        return;
    }
    else
    {
        std::string name;
        std::cout << "����������";
        std::cin >> name;
        abs->arr[abs->m_size].m_name = name;

        std::cout << "�������Ա�";
        std::cout << "1--��";
        std::cout << "2--Ů";
        int sex = 0;
        while (true) //��whileѭ�������������1��2����������ֱ��������ȷ
        {
            std::cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->arr[abs->m_size].m_sex = sex;
                break;
            }
            std::cout << "��������ȷ���Ա�";
        }

        int age = 0;
        std::cout << "����������";
        std::cin >> age;
        abs->arr[abs->m_size].m_age = age;

        std::string phone;
        std::cout << "������绰";
        std::cin >> phone;
        abs->arr[abs->m_size].m_phone = phone;

        std::string address;
        std::cout << "������סַ";
        std::cin >> address;
        abs->arr[abs->m_size].m_addr = address;
        
        std::cout << "��ӳɹ�";
        abs->m_size++;
        system("pause");
        system("cls");
    }
}
void AddressBookSystem::showPerson(Addressbooks* abs)
{
    if (abs->m_size == 0)
    {
        std::cout << "��û����ϵ��";
    }
    else
    {
        for (int i = 0; i < abs->m_size; i++)
        {
            std::cout << "����Ϊ��" << abs->arr[i].m_name << "\t";
            std::cout << "�Ա�Ϊ��" << (abs->arr[i].m_sex == 1 ? "��" : "Ů") << "\t";
            std::cout << "����Ϊ��" << abs->arr[i].m_age << "\t";
            std::cout << "�绰Ϊ" << abs->arr[i].m_phone << "\t";
            std::cout << "סַΪ��" << abs->arr[i].m_addr << "\t";
            std::cout << "\n";
        }
    }
    system("pause");
    system("cls");

}

int AddressBookSystem::searchPerson(Addressbooks* abs, std::string name)//name������������ҵ�����
{
    for (int i = 0; i < abs->m_size; i++)
	{
        if (abs->arr[i].m_name == name)//�ҵ���Ӧ�������Ϣ
        {
            return i;//���ظ������������е�λ�����
        }
    }
    return -1;//û�ҵ�
}


void AddressBookSystem::deletePerson(Addressbooks* abs)//ͨ��������������ǰ�Ƹ���ɾ�������ݣ�ͬʱm_size-1
{
    std::cout << "��������Ҫɾ������ϵ������";
    std::string name;
    std::cin >> name;
    int ret1 = searchPerson(abs, name);
    if (ret1 != -1)
    {
        for (int i = ret1; i < abs->m_size - 1; i++)
        {
            abs->arr[i] = abs->arr[i + 1];//����ɾ����Ա����
        }
        abs->m_size--;//����ͨѶ¼��Ա��Ŀ
        std::cout << "ɾ���ɹ�";
    }
    else
    {
        std::cout << "û�и���ϵ��";
    }
}
void AddressBookSystem::findPerson(Addressbooks* abs)
{
    std::cout << "��������Ҫ���ҵ���ϵ������";
    std::string name;
    std::cin >> name;
    int ret2 = searchPerson(abs, name);//���ص��Ǹó�Ա�������е�λ�����
    if (ret2 != -1)//�������
    {

        std::cout << "����Ϊ��" << abs->arr[ret2].m_name << "\t";
        std::cout << "�Ա�Ϊ��" << (abs->arr[ret2].m_sex == 1 ? "��" : "Ů") << "\t";
        std::cout << "����Ϊ��" << abs->arr[ret2].m_age << "\t";
        std::cout << "�绰Ϊ" << abs->arr[ret2].m_phone << "\t";
        std::cout << "סַΪ��" << abs->arr[ret2].m_addr << "\t";
        std::cout << "\n";
    }
    else
    {
        std::cout << "���޴���";
    }
}

void AddressBookSystem::modifyPerson(Addressbooks* abs)
{
    std::cout << "��������Ҫ�޸ĵ���ϵ������";
    std::string name;
    std::cin >> name;
    int ret2 = searchPerson(abs, name);
    if (ret2 != -1)
    {
        std::string name;
        std::cout << "����������";
        std::cin >> name;
        abs->arr[ret2].m_name = name;

        std::cout << "�������Ա�";
        std::cout << "1--��";
        std::cout << "2--Ů";
        int sex = 0;
        while (true) //��whileѭ�������������1��2����������ֱ��������ȷ
        {
            std::cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->arr[ret2].m_sex = sex;
                break;
            }
            std::cout << "��������ȷ���Ա�";
        }

        int age = 0;
        std::cout << "����������";
        std::cin >> age;
        abs->arr[ret2].m_age = age;

        std::string phone;
        std::cout << "������绰";
        std::cin >> phone;
        abs->arr[ret2].m_phone = phone;

        std::string address;
        std::cout << "������סַ";
        std::cin >> address;
        abs->arr[ret2].m_addr = address;

        std::cout << "�޸ĳɹ�";

        system("pause");
        system("cls");
    }

}
void AddressBookSystem::cleanPerson(Addressbooks* abs)
{
    abs->m_size = 0;
    std::cout << "ͨѶ¼�����";
    system("pause");
    system("cls");
}
