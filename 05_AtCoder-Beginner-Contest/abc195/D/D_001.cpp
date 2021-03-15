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
		int l, r; cin >> l >> r;
		multiset<int> a;
		REP(i, m) if (i<l-1 || r<=i) a.insert(x[i]);
		int res = 0;
		REP(i, n) {
			auto itr = a.lower_bound(p[i].second);
			if (itr != a.end()) {
				res += p[i].first;
				a.erase(itr);
			}
		}
		cout << res << '\n';
	}
    return 0;
}
