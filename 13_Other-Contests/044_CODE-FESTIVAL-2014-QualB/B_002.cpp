#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	ll n, k; cin >> n >> k;
	ll cnt = 0;
	while (n--) {
		ll a; cin >> a;
		if (k > 0) cnt++;
		k -= a;
		if (k <= 0) break ;
	}
	cout << cnt << '\n';
	return 0;
}
