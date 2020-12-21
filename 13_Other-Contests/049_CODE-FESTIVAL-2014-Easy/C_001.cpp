#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int main() {
	int n, m, s, t; cin >> n >> m >> s >> t;
	vector<vector<int> > dist(n+1, vector<int>(n+1, 1e6));
	REP(i, m) {
		int x, y, d; cin >> x >> y >> d;
		dist[x][y] = dist[y][x] = d;
	}
	REP(k, n) REP(i, n) REP(j, n)
		dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
	int res = -1;
	REP(i, n)
		if (dist[s][i]<1e6 && dist[s][i]==dist[i][t])
			res = i;
	cout << res << '\n';
	return 0;
}
