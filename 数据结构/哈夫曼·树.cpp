//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_TREE_HT 100
//
//// ���������Ľڵ�ṹ
//struct MinHeapNode {
//    char data;           // �ַ�
//    unsigned freq;       // �ַ�Ƶ��
//    struct MinHeapNode* left, * right;  // �����ӽڵ�
//};
//
//// ������������С��
//struct MinHeap {
//    unsigned size;               // ��ǰ�ѵĴ�С
//    unsigned capacity;           // �ѵ��������
//    struct MinHeapNode** array;  // ������
//};
//
//// ����һ���µĹ��������ڵ�
//struct MinHeapNode* newNode(char data, unsigned freq) {
//    struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));
//    temp->left = temp->right = NULL;
//    temp->data = data;
//    temp->freq = freq;
//    return temp;
//}
//
//// ����һ����С��
//struct MinHeap* createMinHeap(unsigned capacity) {
//    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
//    minHeap->size = 0;
//    minHeap->capacity = capacity;
//    minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));
//    return minHeap;
//}
//
//// ����������С�ѽڵ�
//void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
//    struct MinHeapNode* t = *a;
//    *a = *b;
//    *b = t;
//}
//
//// ��С�ѻ�(��ɸ��ڵ��ֵ<�ӽ���ֵ)
//void minHeapify(struct MinHeap* minHeap, int idx) {
//    int smallest = idx;//idxΪ�������
//    int left = 2 * idx + 1;//���ӽ��
//    int right = 2 * idx + 2;//���ӽ��
//    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
//        smallest = left;
//
//    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
//        smallest = right;
//
//    if (smallest != idx) 
//    {
//        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
//        minHeapify(minHeap, smallest);
//    }
//}
//
//// ���Ѵ�С�Ƿ�Ϊ1
//int isSizeOne(struct MinHeap* minHeap) {
//    return (minHeap->size == 1);
//}
//
//// ��ȡ��СƵ�ʽڵ�
//struct MinHeapNode* extractMin(struct MinHeap* minHeap) {
//    struct MinHeapNode* temp = minHeap->array[0];
//    minHeap->array[0] = minHeap->array[minHeap->size - 1];
//    --(minHeap->size);
//    minHeapify(minHeap, 0);
//    return temp;
//}
//
//// ����һ���½ڵ㵽��С����
//void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode) {
//    ++minHeap->size;//���鳤������
//    int i = minHeap->size - 1;
//
//    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
//        minHeap->array[i] = minHeap->array[(i - 1) / 2];
//        i = (i - 1) / 2;//���ڵ�
//    }
//    minHeap->array[i] = minHeapNode;
//}
//
//// ������С��
//void buildMinHeap(struct MinHeap* minHeap) {
//    int n = minHeap->size - 1;
//    int i;
//
//    for (i = (n - 1) / 2; i >= 0; --i)//iΪ���һ����Ҷ�ӽ��
//        minHeapify(minHeap, i);
//}
//
//// ��ӡ����������
//void printCodes(struct MinHeapNode* root, int arr[], int top) {
//    if (root->left)//if (root->right!=NULL) 
//    {
//        arr[top] = 0;
//        printCodes(root->left, arr, top + 1);
//    }
//
//    if (root->right) {
//        arr[top] = 1;
//        printCodes(root->right, arr, top + 1);
//    }
//
//    if (!(root->left) && !(root->right)) {
//        printf("%c: ", root->data);
//        for (int i = 0; i < top; ++i)
//            printf("%d", arr[i]);
//        printf("\n");
//    }
//}
//
//// ����Ƿ���Ҷ�ӽڵ�
//int isLeaf(struct MinHeapNode* root) {
//    return !(root->left) && !(root->right);
//}
//
//// ����һ����С�ѣ���������������
//struct MinHeap* createAndBuildMinHeap(char data[], int freq[], int size) {
//    struct MinHeap* minHeap = createMinHeap(size);
//
//    for (int i = 0; i < size; ++i)
//        minHeap->array[i] = newNode(data[i], freq[i]);
//
//    minHeap->size = size;
//    buildMinHeap(minHeap);
//
//    return minHeap;
//}
//
//// ������������
//struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
//    struct MinHeapNode* left, * right, * top;
//
//    struct MinHeap* minHeap = createAndBuildMinHeap(data, freq, size);
//
//    while (!isSizeOne(minHeap)) {
//        left = extractMin(minHeap);
//        right = extractMin(minHeap);
//
//        top = newNode('$', left->freq + right->freq);//һ���µĽ��
//        top->left = left;
//        top->right = right;
//
//        insertMinHeap(minHeap, top);
//    }
//
//    return extractMin(minHeap);
//}
//
//// ��ӡ����������
//void HuffmanCodes(char data[], int freq[], int size) {
//    struct MinHeapNode* root = buildHuffmanTree(data, freq, size);
//
//    int arr[MAX_TREE_HT], top = 0;
//    printCodes(root, arr, top);
//}
//
//int main() {
//    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//    int freq[] = { 5, 9, 12, 13, 16, 45 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    HuffmanCodes(arr, freq, size);
//
//    return 0;
//}
//

