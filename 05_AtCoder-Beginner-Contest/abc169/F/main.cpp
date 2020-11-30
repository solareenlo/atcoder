#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll mod = 998244353;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<ll> dp(s + 1, 0);

    dp[0] = 1;

    REP(i, n) {
        vector<ll> tmp(s + 1, 0);
        swap(dp, tmp);
        REP(j, s + 1) {
            dp[j] += tmp[j] * 2;
            dp[j] %= mod;
            if (j + a[i] <= s) {
                dp[j + a[i]] += tmp[j];
                dp[j + a[i]] %= mod;
            }
        }
    }

    cout << dp[s] << '\n';
    return 0;
}
