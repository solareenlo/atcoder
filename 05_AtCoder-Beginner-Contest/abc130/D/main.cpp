#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	ll k; cin >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	vector<ll> s(n + 1, 0);
	REP(i, n) s[i + 1] += s[i] + a[i];

	ll cnt = 0;
	REP(i, n) {
		ll pos = lower_bound(s.begin(), s.end(), s[i] + k) - s.begin();
		cnt += n - pos + 1;
	}
	cout << cnt << '\n';
	return 0;
}
