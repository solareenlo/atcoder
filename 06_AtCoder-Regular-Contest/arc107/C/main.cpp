#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define mint modint998244353
using namespace std;
using namespace atcoder;

int main() {
	int n, K; cin >> n >> K;
	int a[n][n];
	REP(i, n) REP(j, n) cin >> a[i][j];
	dsu x(n), y(n);
	REP(i, n) REP(j, i) {
		bool ok = true;
		REP(k, n) if (a[k][i] + a[k][j] > K) ok = false;
		if (ok) x.merge(i, j);
		ok = true;
		REP(k, n) if (a[i][k] + a[j][k] > K) ok = false;
		if (ok) y.merge(i, j);
	}
	mint f[n+1];
	f[0] = 1;
	REP(i, n) f[i+1] = f[i] * (i+1);
	mint res = 1;
	auto xv = x.groups();
	for (auto x : xv) res *= f[x.size()];
	auto yv = y.groups();
	for (auto y : yv) res *= f[y.size()];
	cout << res.val() << '\n';
	return 0;
}
