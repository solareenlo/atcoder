#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline bool is_int(ll x, ll y) {
	bool ok = false;
	if (y / x && !(y % x))
		ok = true;
	return ok;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll n; cin >> n;

	ll a, b, c;
	a = b = c = 0;
	bool ok = false;
	for (ll i = 1; i <= 3500; i++) {
		for (ll j = 1; j <= 3500; j++) {
			ll x = 4 * i * j - (i + j) * n;
			ll y = i * j * n;
			if (x > 0 && y >= x) {
				if (is_int(x, y)) {
					a = i;
					b = j;
					c = y / x;
					ok = true;
					break ;
				}
			}
		}
		if(ok) break ;
	}

	cout << a << ' ' << b << ' ' << c << '\n';
	return 0;
}
