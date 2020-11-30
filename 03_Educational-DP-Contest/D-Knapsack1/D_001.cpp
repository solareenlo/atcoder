#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;

    vector<int> w(N);
    vector<int> v(N);
    REP(i, N) cin >> w[i] >> v[i];

    // この dp には価値が入ってる
    vector<vector<ll> > dp(N + 1, vector<ll>(W + 1, 0));

    // i が品物の数
    REP(i, N) REP(j, W + 1) {
        // j が重さの上限
        // ここでは重さで縛ってる
        if (j - w[i] >= 0)
            chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
        chmax(dp[i + 1][j], dp[i][j]);
    }

    cout << dp[N][W] << '\n';
    return 0;
}
