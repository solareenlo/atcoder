#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<bool> a(n + 1, true);
    REP(i, m) {
        int tmp;
        cin >> tmp;
        a[tmp] = false;
    }

    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    REP(now, n) {
        for (int next = now + 1; next <= min(n, now + 2); next++) {
            if (a[next]) {
                dp[next] += dp[now];
                dp[next] %= int(1e9 + 7);
            }
        }
    }

    cout << dp[n] << '\n';
    return 0;
}
