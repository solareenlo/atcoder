// n 人の中で到着時刻の違いの上限が k とした時の，
// c 人組みがどのくらいできるのかを計算する
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, c, k;
    cin >> n >> c >> k;
    vector<int> t(n);
    REP(i, n) cin >> t[i];
    sort(t.begin(), t.end());

    vector<int> diff(n);
    diff[0] = 0;
    REP(i, n - 1) diff[i + 1] = t[i + 1] - t[i];

    vector<int> cum(n + 1, 0);
    REP(i, n) cum[i + 1] = cum[i] + diff[i];

    int cnt = 0;
    int maxi = 0;
    for (int i = 1; i <= n - c; i++) {
        if (cum[i + c - 1] - cum[i] <= k) {
            cnt++;
            i += c - 1 - 1;
        } else cnt = 0;
        maxi = max(maxi, cnt);
    }
    cout << cnt << '\n';
    return 0;
}
