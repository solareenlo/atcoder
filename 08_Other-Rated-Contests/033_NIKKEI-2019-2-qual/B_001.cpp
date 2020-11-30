#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;

	vector<int> d(n, 0);
	REP(i, n) {
		int D; cin >> D;
		d[D]++;
		if (i == 0 && D != 0) {
			cout << 0 << '\n';
			return 0;
		}
	}

	ll res = 1;
	if (d[0] != 1) res = 0;
	else {
		for (int i = 1; i < n; i++) {
			REP(j, d[i]) {
				res *= d[i - 1];
				res %= MOD;
			}
		}
	}

	cout << res << '\n';
	return 0;
}
