#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n, ll k) {
	return max(0LL, n-abs(k-n-1));
}

int main() {
	ll n, k; cin >> n >> k;
	ll res = 0;
	for (ll i = 2; i <= 2*n; i++)
		res += f(n, i) * f(n, i - k);
	cout << res << '\n';
	return 0;
}
