#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
const int MAX_A = 3e5 + 5;
int op(int a, int b) { return max(a, b); }
int e() { return 0; }

int main() {
	int n, k; cin >> n >> k;
	segtree<int, op, e> dp(MAX_A);
	while (n--) {
		int a; cin >> a;
		int l = max(0, a - k);
		int r = min(a + k + 1, MAX_A);
		int now = dp.prod(l, r) + 1;
		dp.set(a, now);
	}
	cout << dp.all_prod() << '\n';
	return 0;
}
