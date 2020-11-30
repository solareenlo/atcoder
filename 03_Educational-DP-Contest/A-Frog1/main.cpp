#include <iostream>
#include <climits>
#include <cmath>
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

    int n;
    cin >> n;

    vector<int> h(n);
    REP(i, n) cin >> h[i];

    vector<int> dp(n + 2, INT_MAX);
    dp[0] = 0;

    REP(i, n) REP(j, 3)
        chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));

    cout << dp[n - 1] << '\n';
    return 0;
}
