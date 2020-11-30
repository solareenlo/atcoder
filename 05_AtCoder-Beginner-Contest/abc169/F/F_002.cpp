#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<vector<ll> > dp(n + 1, vector<ll>(s + 1, 0));

    dp[0][0] = 1;

    REP(i, n) REP(j, s + 1) {
        dp[i + 1][j] += dp[i][j] * 2; // 条件関係無視した部分集合の総和
        dp[i + 1][j] %= 998244353;
        if (j + a[i] <= s) {
            dp[i + 1][j + a[i]] += dp[i][j];
            dp[i + 1][j + a[i]] %= 998244353;
        }
    }

    cout << dp[n][s] << '\n';
    return 0;
}
