#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
const int MAX_A = 3e5 + 5;

int op(int a, int b) { return max(a, b); }
int e() { return 0; }

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	segtree<int, op, e> dp(MAX_A);

	REP(i, n) {
		int x = a[i];
		int l = max(0, x - k);
		int r = min(x + k + 1, MAX_A);
		// dp.prod(l, r) は設計の時に，
		// [l, r) の半開区間になっている(閉区間でも良かったけど，
		// 半開区間の方が何かと便利なので)ので +1 をして，
		// 閉区間にする
		int now = dp.prod(l, r) + 1;
		dp.set(x, now);
	}

	cout << dp.all_prod() << '\n';
	return 0;
}
