#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n], b[m], c[m], I[m][n];
	REP(i, n) cin >> a[i];
	REP(i, m) {
		cin >> b[i] >> c[i];
		REP(j, c[i]) cin >> I[i][j];
		REP(j, c[i]) I[i][j]--;
	}
	int res = 0;
	REP(bit, 1 << n) {
		if (__builtin_popcount(bit) != 9) continue ;
		int now = 0;
		REP(i, n) if (bit >> i & 1) now += a[i];
		REP(i, m) {
			int cnt = 0;
			REP(j, c[i]) if (bit >> I[i][j] & 1) cnt++;
			if (cnt >= 3) now += b[i];
		}
		res = max(res, now);
	}
	cout << res << '\n';
	return 0;
}
