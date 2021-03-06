#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m, q; cin >> n >> m >> q;
	pair<int, int> p[n];
	REP(i, n) cin >> p[i].second >> p[i].first;
	sort(p, p+n, greater<>());
	int x[m];
	REP(i, m) cin >> x[i];
	while (q--) {
		int l, r; cin >> l >> r; l--; r--;
		multiset<int> s;
		REP(i, m) if (i<l || r<i) s.insert(x[i]);
		int res = 0;
		for (auto x : p) {
			auto itr = s.lower_bound(x.second);
			if (itr != s.end()) {
				res += x.first;
				s.erase(itr);
			}
		}
		cout << res << '\n';
	}
	return 0;
}
