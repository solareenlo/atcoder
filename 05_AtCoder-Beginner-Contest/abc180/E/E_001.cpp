#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n), z(n);
	REP(i, n) cin >> x[i] >> y[i] >> z[i];
	int n2 = 1<<n; // 2 の n 乗
	vector<vector<int> > dp(n2, vector<int>(n, INF));
	vector<vector<int> > dist(n, vector<int>(n));
	// dist を前計算
	REP(i, n) REP(j, n) {
		int now = abs(x[i] - x[j]);
		now += abs(y[i] - y[j]);
		now += max(0, z[j] - z[i]);
		dist[i][j] = now;
	}
	// dp を初期化
	REP(i, n) {
		if (i == 0) continue ;
		dp[1<<i][i] = dist[0][i];
	}
	REP(i, n2) REP(j, n) {
		// i の j 桁目が 1 でなければ continue ;
		if (!(i>>j & 1)) continue ;
		REP(k, n) {
			// i に k が含まれていたら continue ;
			if (i>>k & 1) continue ;
			dp[i|1<<k][k] = min(dp[i|1<<k][k], dp[i][j] + dist[j][k]);
		}
	}
	cout << dp[n2-1][0] << '\n';
    return 0;
}
