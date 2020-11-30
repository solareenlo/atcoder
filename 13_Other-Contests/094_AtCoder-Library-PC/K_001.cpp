#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i< (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint998244353;

struct S {
	mint a;
	int size;
};

struct F {
	mint a, b;
};

S op(S l, S r) { return S{l.a + r.a, l.size + r.size}; }
S e() { return S{0, 0}; }
S mapping(F f, S s) { return S{s.a * f.a + s.size * f.b, s.size}; }
F composition(F f, F g) { return F{f.a * g.a, f.a * g.b + f.b}; }
F id() { return F{1, 0}; }

int main() {
	int n, q; cin >> n >> q;
	vector<S> a(n);
	REP(i, n) {
		int tmp; cin >> tmp;
		a[i] = S{tmp, 1};
	}
	lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);
	REP(i, q) {
		int tmp; cin >> tmp;
		int l, r; cin >> l >> r;
		if (tmp == 0) {
			int c, d; cin >> c >> d;
			seg.apply(l, r, F{c, d});
		}
		else
			cout << seg.prod(l, r).a.val() << '\n';
	}
	return 0;
}
