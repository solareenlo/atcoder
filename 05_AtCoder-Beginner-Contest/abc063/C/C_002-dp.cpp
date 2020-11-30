#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> s(n);
    REP(i, n) cin >> s[i];

    vector<vector<bool> > dp(n + 1, vector<bool>(10001, false));

    dp[0][0] = true;
    REP(i, n) {
        REP(j, 10001) {
            if (dp[i][j]) {
                dp[i + 1][j] = true;
                dp[i + 1][j + s[i]] = true;
            }
        }
    }

    int ans = 0;
    REP(i, 10001)
        if (i % 10 && dp[n][i])
            ans = max(ans, i);

    cout << ans << '\n';
    return 0;
}
