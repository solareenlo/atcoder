#include <iostream>
#include <vector>
#include <cstdlib>
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
    int N, K;
    cin >> N >> K;

    long long h[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    long long dp[N + K];
    for (int i = 0; i < N + K; i++) {
        dp[i] = INF;
    }

    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            change_min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }

    cout << dp[N - 1] << '\n';
    return 0;
}
