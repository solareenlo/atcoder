#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int r, s, p;
    cin >> r >> s >> p;
    vector<int> point(128, 0);
    point['r'] = p;
    point['s'] = r;
    point['p'] = s;

    string t;
    cin >> t;

    vector<vector<ll> > dp(t.size() + 1, vector<ll>(3, 0));
    vector<bool> flag(100001, false);

    REP(i, n) REP(j, 3) {
        if (i - k >= 0 && flag[i - k] && t[i] == t[i - k])
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        else {
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + point[t[i]]);
            flag[i] = true;
        }
    }

    ll ans = 0;
    REP(i, 3) ans = max(ans, dp[n][i]);
    cout << ans << '\n';
    return 0;
}
