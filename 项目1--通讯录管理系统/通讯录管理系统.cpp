#include<iostream>
#include <string.h>
#include "AddressBookSystem.h"
using namespace std;


int main(void)
{
    AddressBookSystem absystem;//���������
    
    AddressBookSystem::Addressbooks addressbooks;//����ͨѶ¼�ṹ�����
    addressbooks.arr.resize(1000);//��̬����1000���ռ�

    addressbooks.m_size = 0;//��ʼ��ͨѶ¼����ͨѶ¼��Ϊ0��
    int select;
	bool running = true;//�������б�־
    while (running)
    {
        absystem.ShowMenu();
		cout << "��ѡ��������ܣ�";
        cin >> select;
        switch (select)
        {
        case 1://1�����ϵ��
            absystem.addPerson(&addressbooks);
            break;
        case 2://2��ʾ��ϵ��
            absystem.showPerson(&addressbooks);
            break;
        case 3://3ɾ����ϵ��   ��������������
            absystem.deletePerson(&addressbooks);
            break;
        case 4://4������ϵ��
            absystem.findPerson(&addressbooks);
            break;
        case 5://5�޸���ϵ��
            absystem.modifyPerson(&addressbooks);
            break;
        case 6://6�����ϵ��
            absystem.cleanPerson(&addressbooks);
            break;
        case 0://0�˳�ͨѶ¼
            running = false;//ֹͣѭ�����˳�����
            cout << "��ӭ�´�ʹ��";
            return 0;

        default:
            break;
        }
    }
    return 0;
}