#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	ll n; cin >> n;
	vector<ll> a(n), b(n), c(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	REP(i, n) cin >> b[i];
	sort(b.begin(), b.end());
	REP(i, n) cin >> c[i];
	sort(c.begin(), c.end());

	ll res = 0;
	REP(i, n) {
		auto itr = lower_bound(a.begin(), a.end(), b[i]);
		ll cnt_a = distance(a.begin(), itr);
		itr = upper_bound(c.begin(), c.end(), b[i]);
		ll cnt_c = distance(itr, c.end());
		res += cnt_a * cnt_c;
	}
	cout << res << '\n';
    return 0;
}
