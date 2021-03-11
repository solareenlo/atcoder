#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int x[n], y[n];
	map<pair<int, int>, int> m;
	REP(i, n) {
		cin >> x[i] >> y[i];
		m[{x[i], y[i]}] = i;
	}
	REP(i, n) REP(j, n) if (i != j) {
		int dx = x[j] - x[i];
		int dy = y[j] - y[i];
		if (m.count({x[i]-dy, y[i]+dx}) && m.count({x[j]-dy, y[j]+dx})) {
			set<int> s{i, j, m[{x[i]-dy, y[i]+dx}], m[{x[j]-dy, y[j]+dx}]};
			cout << 4 << '\n';
			for (auto &x : s)
				cout << x+1 << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}
