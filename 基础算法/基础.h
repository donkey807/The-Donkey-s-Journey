

#pragma once
void insert_sort(int arr[], int len);//插入(整理扑克牌)
void binaryInsertsort(int arr[],int len);//折半插入
void shell_sort(int arr[], int len);//希尔排序
void bubble_sort(int arr[], int len);//冒泡（双遍历每次把最极的值放到最后）
void quick_sort(int arr[], int low, int high);//快速排序（随机锁定一个值后，小于它放在其左边，大于它放在其右边（循环此操作））
//堆排序
void select_sort(int arr[], int len);//选择
void merge_sort(int arr[], int len);//归并
void radix_sort(int arr[], int len);//基数排序 LSD


void test01();


