#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > a(n, vector<int>(3));
    REP(i, n) REP(j, 3) cin >> a[i][j];

    vector<vector<int> > dp(n + 1, vector<int>(3, 0));

    REP(i, n) REP(j, 3) REP(k, 3) {
        if (j == k) continue ;
        chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
    }

    int ans = 0;
    REP(i, 3) chmax(ans, dp[n][i]);

    cout << ans << '\n';
    return 0;
}
