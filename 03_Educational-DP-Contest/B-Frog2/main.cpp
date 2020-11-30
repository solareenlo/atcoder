#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    REP(i, n) cin >> h[i];

    vector<int> dp(n + k, INT_MAX);
    dp[0] = 0;

    REP(i, n) REP(j, k + 1)
        chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));

    cout << dp[n - 1] << '\n';
    return 0;
}
