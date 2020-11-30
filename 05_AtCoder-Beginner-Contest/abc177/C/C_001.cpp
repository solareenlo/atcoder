#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	vector<ll> s(n + 1, 0);
	REP(i, n) {
		s[i + 1] += s[i] + a[i];
		s[i + 1] %= MOD;
	}

	ll res = 0;
	REP(i, n - 1) {
		ll tmp = s[n] - s[i + 1];
		if (tmp < 0)
			tmp += MOD;
		res += a[i] * tmp;
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
