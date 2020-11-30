#include <iostream>

using namespace std;

template<class T> inline bool change_max(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;

    int w[N];
    long long v[N];
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    long long dp[N + 1][W + 1];
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < W + 1; j++) {
            dp[i][j] = 0;
        }
    }

    // dp[i][j] := i-1 番目までの品物から重さが j を超えないように選んだときの，
    // 価値の総和の最大値を求める．
    // 縦軸に品物の個数，横軸に重さをとる二次元の DP テーブル表を全部埋める．
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            // i 番目の品物を選ぶ場合
            if (j - w[i] >= 0) {
                change_max(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
            }
            // i 番目の品物を選ばない場合
            change_max(dp[i + 1][j], dp[i][j]);
        }
    }

    cout << dp[N][W] << '\n';
    return 0;
}
