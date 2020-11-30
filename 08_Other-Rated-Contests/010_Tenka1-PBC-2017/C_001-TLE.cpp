#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll n; cin >> n;

	bool ok = false;
	ll a, b, c;
	a = b = c = 0;
	for (ll i = 1; i <= 3500; i++) {
		for (ll j = 1; i <= 3500; j++) {
			for (ll k = 1; k <= 3500; k++) {
				if (4*i*j*k == n * (i*j + j*k + k*i)) {
					a = i;
					b = j;
					c = k;
					ok = true;
					break ;
				}
			}
			if (ok) break ;
		}
		if (ok) break ;
	}

	cout << a << ' ' << b << ' ' << c << '\n';
	return 0;
}
