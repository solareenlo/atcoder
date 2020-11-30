#include "bits/stdc++.h"
using namespace std;

const long long INF = 1LL << 60;
long long h[100010];
long long dp[100010];

template<class T> inline bool change_min(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < N; i++) {
        dp[i] = INF;
    }

    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        change_min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        change_min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
    cout << dp[N - 1] << '\n';
    return 0;
}
