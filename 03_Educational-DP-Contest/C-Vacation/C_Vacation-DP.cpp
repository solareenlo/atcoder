#include <iostream>
#include <vector>
#include <cstdlib>

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

    int N;
    cin >> N;

    long long a[N][3];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    long long dp[N + 1][3];

    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) {
                    continue ;
                }
                change_max(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    long long ans = 0;

    for (int i = 0; i < 3; i++) {
        change_max(ans, dp[N][i]);
    }

    cout << ans << '\n';
    return 0;
}
