#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;

int op(int a, int b) { return max(a, b); }
int e() { return -1; }
int target;
bool f(int v) { return v < target; }

int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	segtree<int, op, e> seg(a);
	REP(i, q) {
		int t; cin >> t;
		if (t == 1) {
			int x, v; cin >> x >> v;
			seg.set(x - 1, v);
		}
		if (t == 2) {
			int l, r; cin >> l >> r;
			cout << seg.prod(l - 1, r) << '\n';
		}
		if (t == 3) {
			int p; cin >> p >> target;
			cout << seg.max_right<f>(p - 1) + 1 << '\n';
		}
	}
	return 0;
}
