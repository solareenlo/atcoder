#include "bits/stdc++.h"
using namespace std;
const int mod = 1e9 + 7;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<int> a(N + 1, true);
    for (int i = 0; i < M; i++) {
        int tmp;
        cin >> tmp;
        a[tmp] = false;
    }

    vector<long long int> dp(N + 1);
    dp[0] = 1;
    for (int now = 0; now < N; now++) {
        for (int next = now + 1; next <= min(N, now + 2); next++) {
            if (a[next]) {
                dp[next] += dp[now];
                dp[next] %= mod;
            }
        }
    }

    cout << dp[N] << '\n';
    return 0;
}
