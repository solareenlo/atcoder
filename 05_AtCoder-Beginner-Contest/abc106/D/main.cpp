#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int c[502][502];

int main() {
	int n, m, Q; cin >> n >> m >> Q;
	REP(i, m) {
		int l, r; cin >> l >> r;
		c[l][r]++;
	}
	REP(i, n) REP(j, n) c[i][j] += c[i][j-1];
	REP(i, n) REP(j, n) c[i][j] += c[i-1][j];
	REP(i, Q) {
		int p, q; cin >> p >> q;
		cout << c[q][q] + c[p-1][p-1] - c[p-1][q] - c[q][p-1] << '\n';
	}
	return 0;
}
