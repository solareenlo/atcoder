#include <iostream>
#include <limits>

using namespace std;

int dp[110][11000];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int p[N];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < N + 1; i++) {
        dp[i][0] = true;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 10000; j++) {
            if (dp[i][j]) {
                dp[i + 1][j] = true;
                dp[i + 1][j + p[i]] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 10000; i++) {
        if (dp[N][i]) {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
