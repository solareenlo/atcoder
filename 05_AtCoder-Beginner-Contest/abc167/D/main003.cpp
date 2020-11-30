#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n); // 全てのワープ方法
    REP(i, n) cin >> a[i];

    vector<int> road; // a[i] の中の必要なワープ方法
    vector<int> count(n + 1, -1); // 自分までの街の個数
    int loop = 1;
    int tail = 0;

    int i = 1;
    while (count[i] == -1) {
        count[i] = road.size();
        road.push_back(i);
        i = a[i - 1];
    }
    tail = count[i];
    loop = road.size() - tail;

    if (k < tail) cout << road[k] << '\n';
    else {
        k -= tail;
        k %= loop;
        cout << road[k + tail] << '\n';
    }
    return 0;
}
