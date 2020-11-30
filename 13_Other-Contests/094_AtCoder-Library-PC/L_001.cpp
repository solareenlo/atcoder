#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using F = bool;

struct S { ll zero, one, inversion; };

S op(S l, S r) {
	return S {
		l.zero + r.zero,
		l.one + r.one,
		l.inversion + r.inversion + l.one * r.zero,
	};
}

S e() { return S{0, 0, 0}; }

S mapping(F l, S r) {
	if (!l) return r;
	return S{r.one, r.zero, r.one * r.zero - r.inversion};
}

F composition(F l, F r) { return (l && !r) || (!l && r); }

F id() { return false; }

int main () {
	int n, q; cin >> n >> q;
	vector<S> a(n, S{0, 0, 0});
	REP(i, n) {
		int x; cin >> x;
		if (x) a[i] = S{0, 1, 0};
		else a[i] = S{1, 0, 0};
	}

	lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);
	REP(i, q) {
		int t, l, r; cin >> t >> l >> r;
		l--;
		if (t == 1) seg.apply(l, r, true);
		else cout << seg.prod(l, r).inversion << '\n';
	}
	return 0;
}
