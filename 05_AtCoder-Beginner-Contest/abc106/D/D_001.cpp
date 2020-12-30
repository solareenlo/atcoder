#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
int x[501][501], c[501][501];
int main() {
	int n, m, q; cin >> n >> m >> q;
	REP(i, m) {
		int l, r; cin >> l >> r;
		x[l][r]++;
	}
	REP(i, n) REP(j, n)
		c[i][j] = c[i][j-1] + x[i][j];
	REP(i, q) {
		int p, q; cin >> p >> q;
		int res = 0;
		for (int j = p; j <= q; j++)
			res += c[j][q] - c[j][p-1];
		cout << res << '\n';
	}
    return 0;
}
