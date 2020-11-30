#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n, 0);
    REP(i, n) cin >> a[i]; // 全部の道順

    vector<int> s; // tail + loop 個内の街における次へのワープ場所
    vector<int> road(n + 1, -1); // 自分までの街の個数
    int tail = 0; // ループに入るまでの街の個数
    int loop = 1; // ループの中の街の個数

    int v = 1;
    // -1 はまだ自分までの街の個数を数えていない
    while (road[v] == -1) {
        road[v] = s.size();
        s.push_back(v);
        v = a[v - 1];
    }
    loop = s.size() - road[v]; // ループの中の街の個数
    tail = road[v]; // ループに入るまでの街の個数

    if (k < tail) cout << s[k] << '\n';
    else {
        k -= tail;
        k %= loop;
        cout << s[tail + k] << '\n';
    }
    return 0;
}
