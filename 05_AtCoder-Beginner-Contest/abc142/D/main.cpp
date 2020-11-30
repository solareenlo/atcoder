#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T>
T gcd(T a, T b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main() {
	ll a, b; cin >> a >> b;
	// 最大公約数
	ll n = gcd(a, b);

	int res = 1;
	// 素因数分解
	for (ll i = 2; i * i < n; i++) {
		if (n % i != 0) continue ;
		res++;
		while (n % i == 0)
			n /= i;
	}

	if (n != 1) res++;
	cout << res << '\n';
	return 0;
}
