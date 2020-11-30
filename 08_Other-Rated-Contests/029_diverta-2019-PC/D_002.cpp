#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	ll res = 0;
	if (n != 1) {
		for (ll i = 1; i*i <= n; i++) {
			if (n % i == 0)
				if (n/(n/i-1) == n%(n/i-1))
					res += n/i-1;
		}
	}
	cout << res << '\n';
	return 0;
}
