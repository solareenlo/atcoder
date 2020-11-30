#include <bits/stdc++.h>
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w; cin >> h >> w;

	vector<vector<int> > c(10, vector<int>(10));
	REP(i, 10) REP(j, 10) cin >> c[i][j];
	// k が経由するポイント
	REP(k, 10) REP(i, 10) REP(j, 10)
		if (c[i][j] > c[i][k] + c[k][j])
			c[i][j] = c[i][k] + c[k][j];

	int res = 0;
	REP(i, h) REP(j, w) {
		int a; cin >> a;
		if (a >= 0) res += c[a][1];
	}

	cout << res << '\n';
    return 0;
}
