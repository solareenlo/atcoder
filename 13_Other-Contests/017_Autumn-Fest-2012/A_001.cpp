#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n, T; cin >> n >> T;
	int p[n]; REP(i, n) cin >> p[i];

	vector<P> s;
	REP(i, n) REP(j, p[i]) {
		int x; cin >> x;
		s.push_back({x, i});
	}
	sort(s.begin(), s.end());

	vector<vector<int> > t(n);
	REP(i, n) REP(j, p[i]) {
		int x; cin >> x;
		t[i].push_back(x);
	}

	int c[20] = {}, r[20] = {};
	for (auto [x, i] : s) {
		if ((T -= t[i][c[i]++]) < 0) break ;
		r[i] = x;
	}
	cout << accumulate(r, r+n, 0) << '\n';
	return 0;
}
