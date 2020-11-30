#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> p(51), b(51);

ll f(ll n, ll x) {
	if (n == 0) return (x <= 0) ? 0 : 1;
	if (x <= 1 + b[n-1]) return f(n-1, x-1);
	else return p[n-1] + 1 + f(n-1, x-2-b[n-1]);
}

int main() {
	ll n, x; cin >> n >> x;
	p[0] = b[0] = 1;
	for (int i = 0; i < 50; i++) {
		b[i+1] = b[i] * 2 + 3;
		p[i+1] = p[i] * 2 + 1;
	}
	cout << f(n, x) << '\n';
	return 0;
}
