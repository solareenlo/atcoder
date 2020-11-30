#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int ng1, ng2, ng3;
    cin >> ng1 >> ng2 >> ng3;

    if (n == ng1 || n == ng2 || n == ng3) cout << "NO" << '\n';
    else {
        vector<int> dp(n + 1, (int)1e9);
        dp[n] = 0;
        for (int i = n; i >= 0; i--) {
            if (i == ng1 || i == ng2 || i == ng3) continue ;
            for (int j = 1; j <= 3; j++)
                if (i - j >= 0)
                    dp[i - j] = min(dp[i] + 1, dp[i - j]);
        }
        if (dp[0] <= 100) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
