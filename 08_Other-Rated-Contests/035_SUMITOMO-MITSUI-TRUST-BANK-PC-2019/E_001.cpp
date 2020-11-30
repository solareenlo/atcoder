#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	vector<int> c(n + 1);
	c[0] = 3;
	ll res = 1;
	REP(i, n) {
		if (!c[a[i]]) {
			cout << 0 << '\n';
			return 0;
		}
		res *= c[a[i]];
		res %= MOD;
		c[a[i]]--;
		c[a[i]+1]++;
	}
	cout << res << '\n';
	return 0;
}
