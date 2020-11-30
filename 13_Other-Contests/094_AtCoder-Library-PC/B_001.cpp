#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define REP(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int n, q; cin >> n >> q;
	fenwick_tree<ll> fw(n);
	REP(i, n) {
		int a; cin >> a;
		fw.add(i, a);
	}
	REP(i, q) {
		int a, l, r; cin >> a >> l >> r;
		if (a) cout << fw.sum(l, r) << '\n';
		else fw.add(l, r);
	}
	return 0;
}
