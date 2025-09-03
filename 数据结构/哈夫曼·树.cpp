//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_TREE_HT 100
//
//// 哈夫曼树的节点结构
//struct MinHeapNode {
//    char data;           // 字符
//    unsigned freq;       // 字符频率
//    struct MinHeapNode* left, * right;  // 左右子节点
//};
//
//// 哈夫曼树的最小堆
//struct MinHeap {
//    unsigned size;               // 当前堆的大小
//    unsigned capacity;           // 堆的最大容量
//    struct MinHeapNode** array;  // 堆数组
//};
//
//// 创建一个新的哈夫曼树节点
//struct MinHeapNode* newNode(char data, unsigned freq) {
//    struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));
//    temp->left = temp->right = NULL;
//    temp->data = data;
//    temp->freq = freq;
//    return temp;
//}
//
//// 创建一个最小堆
//struct MinHeap* createMinHeap(unsigned capacity) {
//    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
//    minHeap->size = 0;
//    minHeap->capacity = capacity;
//    minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));
//    return minHeap;
//}
//
//// 交换两个最小堆节点
//void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
//    struct MinHeapNode* t = *a;
//    *a = *b;
//    *b = t;
//}
//
//// 最小堆化(完成父节点的值<子结点的值)
//void minHeapify(struct MinHeap* minHeap, int idx) {
//    int smallest = idx;//idx为结点索引
//    int left = 2 * idx + 1;//左子结点
//    int right = 2 * idx + 2;//右子结点
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
//// 检查堆大小是否为1
//int isSizeOne(struct MinHeap* minHeap) {
//    return (minHeap->size == 1);
//}
//
//// 提取最小频率节点
//struct MinHeapNode* extractMin(struct MinHeap* minHeap) {
//    struct MinHeapNode* temp = minHeap->array[0];
//    minHeap->array[0] = minHeap->array[minHeap->size - 1];
//    --(minHeap->size);
//    minHeapify(minHeap, 0);
//    return temp;
//}
//
//// 插入一个新节点到最小堆中
//void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode) {
//    ++minHeap->size;//数组长度扩大
//    int i = minHeap->size - 1;
//
//    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
//        minHeap->array[i] = minHeap->array[(i - 1) / 2];
//        i = (i - 1) / 2;//父节点
//    }
//    minHeap->array[i] = minHeapNode;
//}
//
//// 构建最小堆
//void buildMinHeap(struct MinHeap* minHeap) {
//    int n = minHeap->size - 1;
//    int i;
//
//    for (i = (n - 1) / 2; i >= 0; --i)//i为最后一个非叶子结点
//        minHeapify(minHeap, i);
//}
//
//// 打印哈夫曼编码
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
//// 检查是否是叶子节点
//int isLeaf(struct MinHeapNode* root) {
//    return !(root->left) && !(root->right);
//}
//
//// 创建一个最小堆，并构建哈夫曼树
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
//// 构建哈夫曼树
//struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
//    struct MinHeapNode* left, * right, * top;
//
//    struct MinHeap* minHeap = createAndBuildMinHeap(data, freq, size);
//
//    while (!isSizeOne(minHeap)) {
//        left = extractMin(minHeap);
//        right = extractMin(minHeap);
//
//        top = newNode('$', left->freq + right->freq);//一个新的结点
//        top->left = left;
//        top->right = right;
//
//        insertMinHeap(minHeap, top);
//    }
//
//    return extractMin(minHeap);
//}
//
//// 打印哈夫曼编码
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

