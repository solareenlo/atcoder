#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	vector<ll> num;
	for (ll i = 2; i <= n; i++)
		num.push_back(i);
	ll res = accumulate(num.begin(), num.end(), 1LL, [](ll m, ll n) {
			return lcm(m, n);
			});
	cout << res + 1 << '\n';
    return 0;
}
