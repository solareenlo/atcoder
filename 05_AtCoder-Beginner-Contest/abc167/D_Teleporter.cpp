#include <iostream>
#include <vector>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<int> s; // tail + loop 個内の街におけるワープ場所
    // 調べていないところが -1
    vector<int> road(n + 1, -1); // 自分までの部分
    int tail = 0; // ループに入るまでの街の個数
    int period = 1; // ループの中の街の個数

    int v = 1;
    // 調べていないなら while 文を回す
    while (road[v] == -1) {
        road[v] = s.size();
        s.push_back(v);
        v = a[v - 1];
    }
    period = s.size() - road[v];
    tail = road[v];

    if (k < tail) {
        cout << s[k] << '\n';
    } else {
        k -= tail;
        k %= period;
        cout << s[tail + k] << '\n';
    }
    return 0;
}
