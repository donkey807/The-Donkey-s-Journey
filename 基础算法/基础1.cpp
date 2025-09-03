#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
#include"基础.h"
void insert_sort(int arr[], int len)
{
	for (int i = 1; i < len; i++) //从第二个元素开始
	{
		int temp = arr[i];  // 当前待插入的元素
		int j = i;
		while (j > 0 && arr[j - 1] > temp)//1号小于0号
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;  // 插入元素到正确位置
	}
}
void binaryInsertionSort(int arr[], int len) 
{
	int left, right, mid;
	for (int i = 1; i < len; i++)
	{  // 从第二个元素开始
		int temp = arr[i];  // 当前待插入的元素
		left = 0;           // 有序部分的左边界
		right = i;          // 有序部分的右边界

		// 折半查找插入位置
		while (left < right) 
		{
			mid = (left + right) / 2;
			if (arr[mid] > temp) 
			{
				right = mid;  // 插入位置在左半部分
			}
			else 
			{
				left = mid + 1;  // 插入位置在右半部分
			}
		}

		// 将插入位置之后的元素向后移动一位
		for (int j = i; j > left; j--) 
		{
			arr[j] = arr[j - 1];
		}

		// 插入当前元素
		arr[left] = temp;
	}
}
void shell_sort(int arr[], int len) {
	// 计算初始间隔
	for (int gap = len / 2; gap > 0; gap /= 2) {
		// 对每个间隔进行插入排序
		for (int i = gap; i < len; i++)//i++表示组的改变 
		{
			int temp = arr[i];  // 当前待插入的元素
			int j = i;
			// 移动大于temp的元素
			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;  // 插入元素到正确位置
		}
	}
}

void bubble_sort(int arr[], int len)//冒泡    
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
		int min = i;  // 记录最小值的位置，第一个元素默认最小
		for (int j = i + 1; j < len; j++) 
		{
			if (arr[j] < arr[min]) 
			{  // 找到目前最小值
				min = j;  // 记录最小值的位置
			}
		}
		// 交换两个变量
		if (min != i)//说明min已经被上面的一次for循环遍历而改变
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

	cout << "请输入你要调用的函数" << endl;
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
