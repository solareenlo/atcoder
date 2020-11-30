#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> w(n), v(n);
    REP(i, n) cin >> w[i] >> v[i];

    vector<ll> dp(m + 1, 0);
    REP(i, n)
        for (int j = m; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

    cout << dp[m] << '\n';
    return 0;
}
