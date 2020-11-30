#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<int> p(m), y(m);
	vector<vector<int> > num(n + 1);
	REP(i, m) {
		cin >> p[i] >> y[i];
		num[p[i]].push_back(y[i]);
	}

	REP(i, n)
		sort(num[i + 1].begin(), num[i + 1].end());

	REP(i, m) {
		int j = lower_bound(num[p[i]].begin(), num[p[i]].end(), y[i]) - num[p[i]].begin();
		printf("%06d%06d\n", p[i], j + 1);
	}
	return 0;
}
