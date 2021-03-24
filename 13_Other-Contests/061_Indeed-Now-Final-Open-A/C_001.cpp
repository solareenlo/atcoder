#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int d[101][101][101] = {};
	REP(i, n) {
		int a, b, c, w; cin >> a >> b >> c >> w;
		d[a][b][c] = max(d[a][b][c], w);
	}
	int h[m][3];
	REP(i, m) REP(j, 3) cin >> h[i][j];
	int dp[101][101][101] = {};
	REP(i, 101) REP(j, 101) REP(k, 101) {
		int x, y, z;
		x=y=z=0;
		if (i != 0) x = dp[i-1][j][k];
		if (j != 0) y = dp[i][j-1][k];
		if (k != 0) z = dp[i][j][k-1];
		dp[i][j][k] = max(x, max(y, max(z, d[i][j][k])));
	}
	for (int *i : h)
		cout << dp[i[0]][i[1]][i[2]] << '\n';
	return 0;
}
