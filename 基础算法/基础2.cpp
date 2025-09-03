#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
// 合并两个有序子数组的函数
void merge_sort(int arr[], int left, int mid, int right) {
	int n1 = mid - left + 1; // 左子数组的长度
	int n2 = right - mid;    // 右子数组的长度

	// 动态分配临时数组存储左右子数组
	int* L = (int*)malloc(n1 * sizeof(int));
	int* R = (int*)malloc(n2 * sizeof(int));

	// 拷贝数据到临时数组
	for (int i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = arr[mid + 1 + j];
	}

	// 合并临时数组
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	// 复制剩余的元素
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}

	// 释放临时数组
	free(L);
	free(R);
}
// 主要的归并排序函数
void merge_sort(int arr[], int len) {
	if (len <= 1) {
		return; // 如果数组长度小于等于1，已经有序，直接返回
	}

	// 找到中间位置
	int mid = len / 2;

	// 递归排序左半部分
	merge_sort(arr, mid);

	// 递归排序右半部分
	merge_sort(arr + mid, len - mid);

	// 合并两个有序的子数组
	merge_sort(arr, 0, mid - 1, len - 1);
}






int get_number(int low, int high)
{
	return low + rand() % (high - low + 1);
}

// 分区操作
int partition(int arr[], int low, int high)
{
	// 随机选择基准值的位置
	int pivotIndex = get_number(low, high);
	int pivot = arr[pivotIndex];

	// 将基准值移到数组的末尾
	int temp = arr[pivotIndex];
	arr[pivotIndex] = arr[high];
	arr[high] = temp;

	int i = low;            // 左指针
	int j = high - 1;       // 右指针

	while (i <= j)
	{
		// 左指针寻找大于基准值的元素
		while (i <= j && arr[i] <= pivot)
		{
			i++;
		}

		// 右指针寻找小于基准值的元素
		while (i <= j && arr[j] > pivot)
		{
			j--;
		}

		// 如果左指针和右指针没有相遇，则交换元素
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}

	// 将基准值放到中间位置
	temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;

	return i;  // 返回基准值的最终位置
}

// 快速排序函数
void quick_sort(int arr[], int low, int high) 
{
	if (low < high) 
	{
		// 执行分区操作，返回基准值的位置
		int pi = partition(arr, low, high);

		// 递归排序基准值左边的子数组
		quick_sort(arr, low, pi - 1);

		// 递归排序基准值右边的子数组
		quick_sort(arr, pi + 1, high);
	}
}



// 计数排序函数，针对当前位进行排序
void counting_sort_for_radix(int arr[], int len, int exp)//exp表示当前处理的位数
{
	int* output = (int*)malloc(len * sizeof(int));  // 动态分配临时数组
	int count[10] = { 0 };  // 计数数组，用于存储每个数字在当前位的出现次数

	// 计算每个数字在当前位的计数
	for (int i = 0; i < len; i++) {
		count[(arr[i] / exp) % 10]++;
	}

	// 累加计数数组，确定每个数字的最终位置
	for (int i = 1; i < 10; i++) {
		count[i] += count[i - 1];
	}

	// 构建输出数组
	for (int i = len - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	// 将排序结果复制回原数组
	for (int i = 0; i < len; i++) {
		arr[i] = output[i];
	}

	// 释放临时数组
	free(output);
}

// LSD基数排序函数
void radix_sort(int arr[], int size) {
	// 找到数组中的最大值，确定最大位数
	int max_val = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max_val) {
			max_val = arr[i];
		}
	}

	// 逐位进行计数排序
	for (int exp = 1; max_val / exp > 0; exp *= 10) {
		counting_sort_for_radix(arr, size, exp);
	}
}