#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	REP(i, m) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		tmp1--, tmp2--;
		a[i] = tmp1;
		b[i] = tmp2;
	}

	// ワーシャルフロイド法を使って，最短距離が２のものを探す
	vector<vector<int> > d(n, vector<int>(n, (int)1e9));

	REP(i, n) d[i][i] = 0;
	REP(i, m) d[a[i]][b[i]] = d[b[i]][a[i]] = 1;

	// k が経由する点，i が始点，j が終点
	REP(k, n) REP(i, n) REP(j, n)
		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	REP(i, n) {
		int cnt = 0;
		REP(j, n)
			if (d[i][j] == 2) cnt++;
		cout << cnt << '\n';
	}
	return 0;
}
