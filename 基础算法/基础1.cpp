#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
#include"����.h"
void insert_sort(int arr[], int len)
{
	for (int i = 1; i < len; i++) //�ӵڶ���Ԫ�ؿ�ʼ
	{
		int temp = arr[i];  // ��ǰ�������Ԫ��
		int j = i;
		while (j > 0 && arr[j - 1] > temp)//1��С��0��
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;  // ����Ԫ�ص���ȷλ��
	}
}
void binaryInsertionSort(int arr[], int len) 
{
	int left, right, mid;
	for (int i = 1; i < len; i++)
	{  // �ӵڶ���Ԫ�ؿ�ʼ
		int temp = arr[i];  // ��ǰ�������Ԫ��
		left = 0;           // ���򲿷ֵ���߽�
		right = i;          // ���򲿷ֵ��ұ߽�

		// �۰���Ҳ���λ��
		while (left < right) 
		{
			mid = (left + right) / 2;
			if (arr[mid] > temp) 
			{
				right = mid;  // ����λ������벿��
			}
			else 
			{
				left = mid + 1;  // ����λ�����Ұ벿��
			}
		}

		// ������λ��֮���Ԫ������ƶ�һλ
		for (int j = i; j > left; j--) 
		{
			arr[j] = arr[j - 1];
		}

		// ���뵱ǰԪ��
		arr[left] = temp;
	}
}
void shell_sort(int arr[], int len) {
	// �����ʼ���
	for (int gap = len / 2; gap > 0; gap /= 2) {
		// ��ÿ��������в�������
		for (int i = gap; i < len; i++)//i++��ʾ��ĸı� 
		{
			int temp = arr[i];  // ��ǰ�������Ԫ��
			int j = i;
			// �ƶ�����temp��Ԫ��
			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;  // ����Ԫ�ص���ȷλ��
		}
	}
}

void bubble_sort(int arr[], int len)//ð��    
{
	int temp = 0;
	for (int j = 0; j < len; j++)
	{
		for (int i = j + 1; i < len; i++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void select_sort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;  // ��¼��Сֵ��λ�ã���һ��Ԫ��Ĭ����С
		for (int j = i + 1; j < len; j++) 
		{
			if (arr[j] < arr[min]) 
			{  // �ҵ�Ŀǰ��Сֵ
				min = j;  // ��¼��Сֵ��λ��
			}
		}
		// ������������
		if (min != i)//˵��min�Ѿ��������һ��forѭ���������ı�
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}
void test01()
{
	int arr[10] = { 5,4,6,3,8,2,9,10,1,7 };
	int key = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "��������Ҫ���õĺ���" << endl;
	cout << "1 bubble_sort" << endl;
	cout << "2 select_sort" << endl;
	cout << "3 insert_sort" << endl;
	cout << "4 shell_sort" << endl;
	cout << "5 quick_sort" << endl;
	cout << "6 binaryInsertionSort" << endl;
	cout << "7 merge_sort" << endl;
	cout << "8 radix_sort" << endl;
	cin >> key;

	switch (key)
	{
	case 1:
		bubble_sort(arr, len);
		break;
	case 2:
		select_sort(arr, len);
		break;
	case 3:
		insert_sort(arr, len);
		break;
	case 4:
		shell_sort(arr, len);
		break;
	case 5:
		quick_sort(arr,0,len-1);
		break;
	case 6:
		binaryInsertionSort(arr, len);
		break;
	case 7:
		merge_sort(arr, len);
		break;
	case 8:
		radix_sort(arr, len);
		break;
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}
