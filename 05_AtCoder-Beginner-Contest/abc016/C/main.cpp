#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int d[n][n];
	REP(i, n) REP(j, n) d[i][j] = (int)1e9;
	REP(i, n) d[i][i] = 0;
	REP(i, m) {
		int a, b; cin >> a >> b; a--; b--;
		d[a][b] = d[b][a] = 1;
	}
	REP(k, n) REP(i, n) REP(j, n)
		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	REP(i, n) {
		int cnt = 0;
		REP(j, n) if (d[i][j] == 2) cnt++;
		cout << cnt << '\n';
	}
	return 0;
}
