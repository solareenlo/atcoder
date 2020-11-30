#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll n;
	cin >> n;

	ll ans = 0;
	for (ll i = 1; i <= n; i++)
		ans += (n / i) * (n / i + 1) * i / 2;

	cout << ans << '\n';
	return 0;
}
