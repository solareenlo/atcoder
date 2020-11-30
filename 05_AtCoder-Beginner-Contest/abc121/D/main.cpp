#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b; cin >> a >> b;
	ll n = b - a;
	ll res = 0;
	if (a % 2 == 0) {
		for (ll i = 0; i <= n % 4; i++)
			res ^= (b - i);
	}
	if (a % 2) {
		res = a;
		for (ll i = 1; i <= n % 4; i++)
			res ^= (b - i + 1);
	}
	cout << res << '\n';
    return 0;
}
