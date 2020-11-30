#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	ll m, r; cin >> m >> r;
	vector<ll> s(n - 1, 0);
	REP(i, n - 1) cin >> s[i];
	sort(s.rbegin(), s.rend());

	ll expected = r * k;
	if (n == k) {
		ll sum = accumulate(s.begin(), s.end(), 0LL);
		if (expected <= sum)
			cout << 0 << '\n';
		else if (expected - sum > m)
			cout << -1 << '\n';
		else
			cout << expected - sum << '\n';
	} else {
		ll sum = 0;
		REP(i, k) sum += s[i];
		if (expected <= sum)
			cout << 0 << '\n';
		else {
			sum -= s[k - 1];
			if (expected - sum > m)
				cout << -1 << '\n';
			else
				cout << expected - sum << '\n';
		}
	}
	return 0;
}
