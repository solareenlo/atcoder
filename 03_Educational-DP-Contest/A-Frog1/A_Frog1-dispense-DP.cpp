#include <iostream>
#include <cmath>
using namespace std;

// a より b の方が小さかったら，a の値を b の値に置き換える (そして true を返す)
// そうでなかったら、何もしない (そして false を返す)
template<class T> inline bool change_min(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

// a より b の方が大きかったら，a の値を b の値に置き換える
// そうでなかったら、何もしない (そして false を返す)
template<class T> inline bool change_max(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

// 無限大の値を設定
const long long INF = 1LL << 60;

// 高さテーブルを用意
long long h[100010];

// DP テーブルを用意
long long dp[100010];

int main(void) {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }
    // DP テーブル全体を初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) {
        dp[i] = INF;
    }
    // 初期条件を設定
    dp[0] = 0;
    for (int i = 0; i < N; ++i) {
        change_min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        change_min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
    cout << dp[N - 1] << '\n';
    return 0;
}
