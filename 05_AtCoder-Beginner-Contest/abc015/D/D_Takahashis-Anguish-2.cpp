#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

template<class T> inline bool change_max(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int W, N, K;
int A[51], B[51];
int dp[51][51][10001];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> W;
    cin >> N >> K;

    REP(i, N){
        cin >> A[i] >> B[i];
    }

    REP(i, N) REP(k, K + 1) REP(w, W + 1) {
        change_max(dp[i + 1][k][w], dp[i][k][w]);
        if (w + A[i] <= W && k + 1 <= K) {
            change_max(dp[i + 1][k + 1][w + A[i]], dp[i][k][w] + B[i]);
        }
    }

    int ans = 0;
    REP(k, K + 1) REP(w, W + 1) {
        change_max(ans, dp[N][k][w]);
    }

    cout << ans << '\n';
    return 0;
}
