#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int n, q; cin >> n >> q;

	dsu d(n);
	REP(i, q) {
		int t, u, v; cin >> t >> u >> v;
		if (t) cout << d.same(u, v) << '\n';
		else d.merge(u, v);
	}
	return 0;
}
