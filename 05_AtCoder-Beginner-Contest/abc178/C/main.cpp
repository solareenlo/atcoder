#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	ll n; cin >> n;
	ll a, b, c;
	a = b = c = 1;
	while (n--) {
		a = a * 10 % MOD;
		b = b * 9 % MOD;
		c = c * 8 % MOD;
	}
	cout << ((a - 2 * b + c) % MOD + MOD) % MOD << '\n';
	return 0;
}
