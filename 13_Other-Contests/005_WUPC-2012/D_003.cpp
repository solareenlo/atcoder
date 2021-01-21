#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n][n];
	bzero(a, sizeof(a));
	REP(i, n) REP(j, i+1) cin >> a[i][j];
	REP(i, n) REP(j, n) {
		if (i > 0 && j > 0)
			a[i][j] = max(a[i][j] + a[i-1][j], a[i][j] + a[i-1][j-1]);
		else if (i > 0)
			a[i][j] += a[i-1][j];
	}
	int res = 0;
	REP(i, n) res = max(res, a[n-1][i]);
	cout << res << '\n';
	return 0;
}
