#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x;
    cin >> x;

    vector<bool> dp(x + 1, false);

    dp[0] = true;
    REP(i, x + 1) {
        if (i - 100 >= 0 && dp[i - 100]) dp[i] = true;
        if (i - 101 >= 0 && dp[i - 101]) dp[i] = true;
        if (i - 102 >= 0 && dp[i - 102]) dp[i] = true;
        if (i - 103 >= 0 && dp[i - 103]) dp[i] = true;
        if (i - 104 >= 0 && dp[i - 104]) dp[i] = true;
        if (i - 105 >= 0 && dp[i - 105]) dp[i] = true;
    }

    if (dp[x]) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}
