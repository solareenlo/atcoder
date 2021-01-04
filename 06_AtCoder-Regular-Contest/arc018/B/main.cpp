#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;

	int64_t x[n], y[n];
	REP(i, n) cin >> x[i] >> y[i];

	int cnt = 0;
	REP(i, n) REP(j, i) REP(k, j) {
		int64_t x1 = x[j] - x[i];
		int64_t x2 = x[k] - x[i];
		int64_t y1 = y[j] - y[i];
		int64_t y2 = y[k] - y[i];
		int64_t s = x1 * y2 - x2 * y1;
		if (s != 0 && s % 2 == 0) cnt++;
	}
	cout << cnt << '\n';
    return 0;
}
