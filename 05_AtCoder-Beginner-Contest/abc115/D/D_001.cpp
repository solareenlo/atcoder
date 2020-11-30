#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
vector<ll> b(51), p(51);

ll f(ll n, ll x) {
	if (x == 0) return 0;
	if (n == 0) return 1;
	if (x <= 1 + b[n-1])
		return f(n - 1, x - 1);
	else
		return p[n-1] + 1 + f(n - 1, x - 2 - b[n-1]);
}

int main() {
	int n; cin >> n;
	ll x; cin >> x;

	b[0] = p[0] = 1;
	REP(i, 50) {
		p[i+1] = p[i] * 2 + 1;
		b[i+1] = b[i] * 2 + 3;
	}
	cout << f(n, x) << '\n';
    return 0;
}
