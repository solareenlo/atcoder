#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
	int n, m; cin >> n >> m;
	dsu d(n);
	vector<ll> a(n), b(n);
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	REP(i, m) {
		int l, r; cin >> l >> r;
		d.merge(--l, --r);
	}
	if (accumulate(a.begin(), a.end(), 0LL) != accumulate(b.begin(), b.end(), 0LL))
		cout << "No" << '\n';
	else {
		vector<vector<int> > g = d.groups();
		int cnt = 0;
		for (auto x : g) {
			ll sumA = 0;
			ll sumB = 0;
			for (auto i : x) {
				sumA += a[i];
				sumB += b[i];
			}
			if (sumA == sumB)
				cnt++;
		}
		if (cnt == (int)g.size())
			cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
