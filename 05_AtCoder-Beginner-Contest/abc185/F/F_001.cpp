#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int op(int a, int b) { return a^b; }
int e() { return 0; }

int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for (int &x : a) cin >> x;
	segtree<int, op, e> seg(a);
	while (q--) {
		int t, x, y; cin >> t >> x >> y; x--;
		if (t == 1) seg.set(x, seg.get(x)^y);
		else cout << seg.prod(x, y) << '\n';
	}
    return 0;
}
