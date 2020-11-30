#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n); // ワープ手順全部
    REP(i, n) cin >> a[i];

    vector<int> road; // 必要なワープ手順 (tail と loop の部分)
    vector<int> count(n + 1, -1); // index の街までのワープする街の個数
    int tail = 0; // tail 部分の街の個数
    int loop = 1; // loop 部分の街の個数

    int v = 1;
    while (count[v] == -1) {
        count[v] = road.size();
        road.push_back(v);
        v = a[v - 1];
    }
    tail = count[v]; // v はループ1歩手前の場所
    loop = road.size() - tail;

    if (k < tail) cout << road[k] << '\n';
    else {
        k -= tail;
        k %= loop;
        cout << road[tail + k] << '\n';
    }
    return 0;
}
