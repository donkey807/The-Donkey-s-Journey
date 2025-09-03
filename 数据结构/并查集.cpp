//#include <iostream>
//using namespace std;
//
//const int N = 100005;  // ���Ԫ������
//int parent[N];         // �洢ÿ��Ԫ�صĸ��ڵ�
//int rank_a[N];           // �洢ÿ�����ϵ����
//
//// ��ʼ��
//void init(int n) {
//    for (int i = 0; i < n; i++) {
//        parent[i] = i;
//        rank_a[i] = 0;
//    }
//}
//
//// ���ң���·��ѹ��(���Ҹ��ڵ㣬û�ϲ�ʱ���ڵ����䱾��)
//int find(int x) {
//    if (parent[x] != x) {
//        parent[x] = find(parent[x]);  // ·��ѹ��
//    }
//    return parent[x];
//}
//
//// �ϲ��������Ⱥϲ�
//void unionSets(int x, int y) {
//    int rootX = find(x);
//    int rootY = find(y);
//    if (rootX != rootY) {
//        if (rank_a[rootX] < rank_a[rootY]) {
//            parent[rootX] = rootY;
//        }
//        else if (rank_a[rootX] > rank_a[rootY]) {
//            parent[rootY] = rootX;
//        }
//        else {
//            parent[rootY] = rootX;
//            rank_a[rootX]++;
//        }
//    }
//}
//
//// �ж��Ƿ���ͬһ����
//bool isConnected(int x, int y) {
//    return find(x) == find(y);
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;  // n ��Ԫ��������m �ǲ�������
//    init(n);
//    for (int i = 0; i < m; i++) {
//        int op, a, b;
//        cin >> op >> a >> b;
//        if (op == 0) {  // �ϲ�����
//            unionSets(a, b);
//        }
//        else {        // ��ѯ����
//            cout << (isConnected(a, b) ? "Yes" : "No") << endl;
//        }
//    }
//    return 0;
//}