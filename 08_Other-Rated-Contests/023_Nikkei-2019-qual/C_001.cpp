#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int n; cin >> n;
	ll res = 0;
	vector<ll> s(n);
	for (int i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		s[i] = a + b;
		res -= b;
	}
	sort(s.rbegin(), s.rend());
	for (int i = 0; i < n; i += 2)
		res += s[i];
	cout << res << '\n';
	return 0;
}
