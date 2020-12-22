#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n], b[m], c[m], I[m][n];
	REP(i, n) cin >> a[i];
	REP(i, m) {
		cin >> b[i] >> c[i];
		REP(j, c[i]) {
			cin >> I[i][j];
			I[i][j]--;
		}
	}
	int now, res = 0;
	REP(i, 1<<n) {
		if (__builtin_popcount(i) != 9) continue ;
		now = 0;
		REP(j, n) if (i>>j&1) now += a[j];
		REP(j, m) {
			int cnt = 0;
			REP(k, c[j]) if (i>>I[j][k]&1) cnt++;
			if (cnt>=3) now += b[j];
		}
		res = max(res, now);
	}
	cout << res << '\n';
	return 0;
}
