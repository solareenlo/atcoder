#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	ll n; cin >> n;
	ll l = 0, r = 2e9;
	while (r - l > 1) {
		ll m = (l + r) / 2;
		((m * (m + 1) <= (n + 1) * 2) ? l : r) = m;
	}
	cout << n - l + 1 << '\n';
	return 0;
}
