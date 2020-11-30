#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int MOD = 998244353;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<vector<ll> > dp(c + 1, vector<ll>(d + 1, 0));

    dp[a][b] = 1;

    for (int i = a; i <= c; i++) for (int j = b; j <= d; j++)
        if (!(i == a && j == b))
            dp[i][j] = ((dp[i - 1][j] * j) + (dp[i][j - 1] * i) - (dp[i - 1][j - 1] * (i - 1) * (j - 1)) % MOD + MOD) % MOD;

    cout << dp[c][d] << '\n';
    return 0;
}
