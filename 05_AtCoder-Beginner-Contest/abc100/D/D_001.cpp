#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int64_t xyz[8][n];
	bzero(xyz, sizeof(xyz));
	REP(i, n) REP(j, 3) {
		int64_t x; cin >> x;
		REP(k, 8)
			xyz[k][i] += 1 << j & k ? x : -x;
	}
	int64_t res = -1e16;
	REP(i, 8) {
		sort(xyz[i], xyz[i]+n, greater<int64_t>());
		int64_t sum = 0;
		REP(j, m)
			sum += xyz[i][j];
		res = max(res, sum);
	}
	cout << res << '\n';
    return 0;
}
