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
int A[50], B[50];
int dp[51][52][11001];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> W;
    cin >> N >> K;
    REP(i, N) {
        cin >> A[i] >> B[i];
    }

    REP(i, N) REP(j, i + 1) REP(w, 10000 + 1) {
        change_max(dp[i + 1][j][w], dp[i][j][w]); // i 番目のスクリーンショットを選ばない場合
        change_max(dp[i + 1][j + 1][w + A[i]], dp[i][j][w] + B[i]);
    }

    int ans = 0;
    REP(j, K + 1) REP(w, W + 1) {
        change_max(ans, dp[N][j][w]);
    }

    cout << ans << '\n';
    return 0;
}
