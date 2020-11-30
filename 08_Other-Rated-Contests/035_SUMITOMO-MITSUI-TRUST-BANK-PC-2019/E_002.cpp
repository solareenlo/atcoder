#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	int c[3] = {0};
	ll res = 1;
	REP(i, n) {
		ll cnt = 0;
		int id = -1;
		if (a[i] == c[0]) { cnt++; id = 0; }
		if (a[i] == c[1]) { cnt++; id = 1; }
		if (a[i] == c[2]) { cnt++; id = 2; }
		if (id == -1) {
			cout << 0 << '\n';
			return 0;
		}
		res *= cnt;
		res %= MOD;
		c[id]++;
	}
	cout << res << '\n';
	return 0;
}
