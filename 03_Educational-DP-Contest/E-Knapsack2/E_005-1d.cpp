#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    REP(i, N) cin >> w[i] >> v[i];

    vector<ll> dp(100001, 1LL << 60);

    dp[0] = 0;

    REP(i, N)
        for (int j = 100000; j >= v[i]; j--)
            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);

    int ans = 0;
    REP(i, 100001)
        if (dp[i] <= W)
            ans = i;

    cout << ans << '\n';
    return 0;
}
