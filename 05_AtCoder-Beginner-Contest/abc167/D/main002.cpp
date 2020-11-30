#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<int> ans;
    vector<int> road(n+1, -1);
    int tail = 0;
    int loop = 1;

    int i = 1;
    while (road[i] == -1) {
        road[i] = ans.size();
        ans.push_back(i);
        i = a[i - 1];
    }
    loop = ans.size() - road[i]; // i はループする1歩手前の場所
    tail = road[i]; // road[i] はループする1歩手前までの街の個数

    if (k < tail) cout << ans[k] << '\n';
    else {
        k -= tail;
        k %= loop;
        cout << ans[tail + k] << '\n';
    }
    return 0;
}
