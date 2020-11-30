#include <iostream>
#include <limits>

using namespace std;

template<class T> inline bool change_min(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

const long long INF = numeric_limits<long long>::max();

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    long long dp[N + 1];
    for (int i = 0; i < N + 1; i++) {
        dp[i] = INF;
    }

    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        // 1個先は１ずつ増える
        change_min(dp[i + 1], dp[i] + 1);
        // 6個先も1ずつ増える
        for (int j = 6; i + j <= N; j *= 6) {
            change_min(dp[i + j], dp[i] + 1);
        }
        // 9個先も1ずつ増える
        for (int j = 9; i + j <= N; j *= 9) {
            change_min(dp[i + j], dp[i] + 1);
        }
    }

    cout << dp[N] << '\n';
    return 0;
}
