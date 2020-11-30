#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int MAX = 1e6 + 3;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;

    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    vector<int> dp(MAX, 0);

    for (auto x : a) {
        if (dp[x] != 0) {
            dp[x] = 2;
            continue ;
        }
        for (int i = x; i < MAX; i += x) dp[i]++;
    }

    int cnt = 0;
    for (auto x : a)
        if (dp[x] == 1) cnt++;

    cout << cnt << '\n';
    return 0;
}
