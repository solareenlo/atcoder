#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	REP(i, n) cin >> x[i] >> y[i];

	int maxi = 0;
	REP(i, n) REP(j, n) {
		if (i == j) continue ;
		int dx = x[i] - x[j];
		int dy = y[i] - y[j];
		int cnt = 0;
		REP(k, n) REP(l, n) {
			if (k == l) continue ;
			int dx2 = x[k] - x[l];
			int dy2 = y[k] - y[l];
			if (dx == dx2 && dy == dy2)
				cnt++;
		}
		maxi = max(maxi, cnt);
	}
	cout << n - maxi << '\n';
	return 0;
}
