//#include <iostream>
//using namespace std;
//
//const int N = 100005;  // 最大元素数量
//int parent[N];         // 存储每个元素的父节点
//int rank_a[N];           // 存储每个集合的深度
//
//// 初始化
//void init(int n) {
//    for (int i = 0; i < n; i++) {
//        parent[i] = i;
//        rank_a[i] = 0;
//    }
//}
//
//// 查找，带路径压缩(查找根节点，没合并时根节点是其本身)
//int find(int x) {
//    if (parent[x] != x) {
//        parent[x] = find(parent[x]);  // 路径压缩
//    }
//    return parent[x];
//}
//
//// 合并，带按秩合并
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
//// 判断是否在同一集合
//bool isConnected(int x, int y) {
//    return find(x) == find(y);
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;  // n 是元素数量，m 是操作数量
//    init(n);
//    for (int i = 0; i < m; i++) {
//        int op, a, b;
//        cin >> op >> a >> b;
//        if (op == 0) {  // 合并操作
//            unionSets(a, b);
//        }
//        else {        // 查询操作
//            cout << (isConnected(a, b) ? "Yes" : "No") << endl;
//        }
//    }
//    return 0;
//}