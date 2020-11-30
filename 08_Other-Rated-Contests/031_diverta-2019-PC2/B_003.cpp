#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	REP(i, n) cin >> x[i] >> y[i];

	int maxi = 0;
	map<pair<int, int>, int> cnt;
	REP(i, n) REP(j, n) {
		if (i == j) continue ;
		int dx = x[i] - x[j];
		int dy = y[i] - y[j];
		maxi = max(maxi, ++cnt[make_pair(dx, dy)]);
	}
	cout << n - maxi << '\n';
	return 0;
}
