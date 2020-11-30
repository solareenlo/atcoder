#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MAX = 100001;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;

    vector<ll> w(N), v(N);
    REP(i, N) cin >> w[i] >> v[i];

    vector<vector<ll> > dp(N + 1, vector<ll>(MAX, 1LL << 60));

    dp[0][0] = 0;

    REP(i, N) REP(j, MAX) {
        if (j - v[i] >= 0)
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }

    int ans = 0;
    REP(j, MAX)
        if (dp[N][j] <= W)
            ans = j;

    cout << ans << '\n';
    return 0;
}
