#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	vector<vector<pair<int, int> > > xy(20);
	REP(i, n) {
		cin >> a[i];
		REP(j, a[i]) {
			int x, y; cin >> x >> y;
			xy[i].push_back(make_pair(--x, y));
		}
	}

	int maxi = 0;
	REP(mask, 1 << n) {
		bool ok = true;
		REP(i, n) {
			if (!(mask & 1 << i)) continue ;
			for (auto p : xy[i]) {
				if (bool(mask & 1 << p.first) != p.second)
					ok = false;
			}
			if (!ok) break ;
		}
		if (ok)
			maxi = max(maxi, __builtin_popcount(mask));
	}
	cout << maxi << '\n';
	return 0;
}
