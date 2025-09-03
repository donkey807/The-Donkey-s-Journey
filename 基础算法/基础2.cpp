#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
// �ϲ���������������ĺ���
void merge_sort(int arr[], int left, int mid, int right) {
	int n1 = mid - left + 1; // ��������ĳ���
	int n2 = right - mid;    // ��������ĳ���

	// ��̬������ʱ����洢����������
	int* L = (int*)malloc(n1 * sizeof(int));
	int* R = (int*)malloc(n2 * sizeof(int));

	// �������ݵ���ʱ����
	for (int i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = arr[mid + 1 + j];
	}

	// �ϲ���ʱ����
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
	// ����ʣ���Ԫ��
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

	// �ͷ���ʱ����
	free(L);
	free(R);
}
// ��Ҫ�Ĺ鲢������
void merge_sort(int arr[], int len) {
	if (len <= 1) {
		return; // ������鳤��С�ڵ���1���Ѿ�����ֱ�ӷ���
	}

	// �ҵ��м�λ��
	int mid = len / 2;

	// �ݹ�������벿��
	merge_sort(arr, mid);

	// �ݹ������Ұ벿��
	merge_sort(arr + mid, len - mid);

	// �ϲ����������������
	merge_sort(arr, 0, mid - 1, len - 1);
}






int get_number(int low, int high)
{
	return low + rand() % (high - low + 1);
}

// ��������
int partition(int arr[], int low, int high)
{
	// ���ѡ���׼ֵ��λ��
	int pivotIndex = get_number(low, high);
	int pivot = arr[pivotIndex];

	// ����׼ֵ�Ƶ������ĩβ
	int temp = arr[pivotIndex];
	arr[pivotIndex] = arr[high];
	arr[high] = temp;

	int i = low;            // ��ָ��
	int j = high - 1;       // ��ָ��

	while (i <= j)
	{
		// ��ָ��Ѱ�Ҵ��ڻ�׼ֵ��Ԫ��
		while (i <= j && arr[i] <= pivot)
		{
			i++;
		}

		// ��ָ��Ѱ��С�ڻ�׼ֵ��Ԫ��
		while (i <= j && arr[j] > pivot)
		{
			j--;
		}

		// �����ָ�����ָ��û���������򽻻�Ԫ��
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}

	// ����׼ֵ�ŵ��м�λ��
	temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;

	return i;  // ���ػ�׼ֵ������λ��
}

// ����������
void quick_sort(int arr[], int low, int high) 
{
	if (low < high) 
	{
		// ִ�з������������ػ�׼ֵ��λ��
		int pi = partition(arr, low, high);

		// �ݹ������׼ֵ��ߵ�������
		quick_sort(arr, low, pi - 1);

		// �ݹ������׼ֵ�ұߵ�������
		quick_sort(arr, pi + 1, high);
	}
}



// ��������������Ե�ǰλ��������
void counting_sort_for_radix(int arr[], int len, int exp)//exp��ʾ��ǰ�����λ��
{
	int* output = (int*)malloc(len * sizeof(int));  // ��̬������ʱ����
	int count[10] = { 0 };  // �������飬���ڴ洢ÿ�������ڵ�ǰλ�ĳ��ִ���

	// ����ÿ�������ڵ�ǰλ�ļ���
	for (int i = 0; i < len; i++) {
		count[(arr[i] / exp) % 10]++;
	}

	// �ۼӼ������飬ȷ��ÿ�����ֵ�����λ��
	for (int i = 1; i < 10; i++) {
		count[i] += count[i - 1];
	}

	// �����������
	for (int i = len - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	// �����������ƻ�ԭ����
	for (int i = 0; i < len; i++) {
		arr[i] = output[i];
	}

	// �ͷ���ʱ����
	free(output);
}

// LSD����������
void radix_sort(int arr[], int size) {
	// �ҵ������е����ֵ��ȷ�����λ��
	int max_val = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max_val) {
			max_val = arr[i];
		}
	}

	// ��λ���м�������
	for (int exp = 1; max_val / exp > 0; exp *= 10) {
		counting_sort_for_radix(arr, size, exp);
	}
}