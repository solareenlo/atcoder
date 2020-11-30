#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1000000007;

int main () {
	int n, k; cin >> n >> k;
	vector<vector<int> > a(n, vector<int>(k)), b(n, vector<int>(k+1));
	REP(i, n) REP(j, k) cin >> a[i][j];
	REP(i, k) b[0][i] = 1;
	for (int i = 1; i < n; i++) {
		REP(j, k) {
			int tmp = lower_bound(a[i].begin(), a[i].end(), a[i-1][j]) - a[i].begin();
			b[i][tmp] += b[i-1][j];
			b[i][tmp] %= MOD;
		}
		REP(j, k) {
			b[i][j+1] += b[i][j];
			b[i][j+1] %= MOD;
		}
	}
	int res = 0;
	REP(i, k) {
		res += b[n-1][i];
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
