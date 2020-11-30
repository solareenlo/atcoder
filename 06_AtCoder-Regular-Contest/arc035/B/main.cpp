#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> t(n);
	REP(i, n) cin >> t[i];
	sort(t.begin(), t.end());
	ll sum = 0;
	REP(i, n)
		sum += t[n - 1 - i] * (i + 1);
	cout << sum << '\n';

	map<int, int> m;
	REP(i, n)
		m[t[i]]++;
	ll res = 1;
	for (auto x : m) {
		for (ll i = 1; i <= x.second; i++) {
			res *= i;
			res %= MOD;
		}
	}
	cout << res << '\n';
    return 0;
}
