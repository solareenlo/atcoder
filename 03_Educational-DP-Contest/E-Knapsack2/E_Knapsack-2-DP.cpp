#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

template<class T> inline bool change_min(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

const long long INF = 1LL << 60;
int N;
long long W;
long long w[110];
int v[110];
long long dp[110][100100];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> W;
    REP(i, N) {
        cin >> w[i] >> v[i];
    }

    REP(i, 110) REP(j, 100100) {
        dp[i][j] = INF;
    }

    dp[0][0] = 0;

    // dp[i][j] := i-1 番目までの品物から価値が j 以上を達成するように選んだときの，
    // 重さの総和の最小値を求める．
    REP(i, N) REP(j, 100100) {
        if (j - v[i] >= 0) {
            change_min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
        }
        change_min(dp[i + 1][j], dp[i][j]);
    }

    // dp[N][j] の値が、W 以下であるような， j の値の最大値が答え．
    int ans = 0;
    REP(j, 100100) {
        if (dp[N][j] <= W) {
            ans = j;
        }
    }

    cout << ans << '\n';
    return 0;
}
