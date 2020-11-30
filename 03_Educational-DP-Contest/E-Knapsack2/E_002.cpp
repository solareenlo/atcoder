#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, w;
    cin >> n >> w;

    vector<ll> weight(n), value(n);
    REP(i, n) cin >> weight[i] >> value[i];

    vector<vector<ll> > dp(n + 1, vector<ll>(100001, 1LL << 60));

    dp[0][0] = 0;
    REP(i, n) REP(j, 100001) {
        if (j - value[i] >= 0)
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - value[i]] + weight[i]);
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }

    int ans = 0;
    REP(j, 100001)
        if (dp[n][j] <= w)
            ans = j;

    cout << ans << '\n';
    return 0;
}
