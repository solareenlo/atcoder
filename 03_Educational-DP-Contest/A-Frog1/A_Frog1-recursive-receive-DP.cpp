#include "bits/stdc++.h"
using namespace std;

template<class T> inline bool chainge_min(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chainge_max(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const long long INF = 1LL << 60;
long long h[100010];
long long dp[100010];


long long rec(int i) {
    // DP の値が更新されていたらそのままリターン
    if (dp[i] < INF) {
        return dp[i];
    }
    // 足場0のコストは0
    if (i == 0) {
        return 0;
    }
    long long res = INF;
    chainge_min(res, rec(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1) {
        chainge_min(res, rec(i - 2) + abs(h[i] - h[i -2]));
    }
    // 結果をメモしながら返す
    return dp[i] = res;
}

int main(void) {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }
    // 初期化 (最小化問題なので INF で初期化)
    for (int i = 0; i < 100010; ++i) {
        dp[i] = INF;
    }
    cout << rec(N - 1) << endl;
    return 0;
}
