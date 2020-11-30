#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<int> dp(n + 1);
    dp[0] = a[0];
    for (int i = 1; i < n; i++)
        dp[i] = dp[i - 1] * 2 + a[i];

    cout << dp[n - 1] << '\n';
    return 0;
}
