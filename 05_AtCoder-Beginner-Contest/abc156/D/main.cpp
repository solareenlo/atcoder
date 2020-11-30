#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

inline ll modpow(ll a, ll n) {
	ll res = 1;
	while (n) {
		if (n & 1) res = res * a % MOD;
		a = a * a % MOD;
		n >>= 1;
	}
	return res;
}

inline ll nCr(ll n, ll r) {
	ll x = 1;
	ll y = 1;
	REP(i, r) {
		x = (x * (n - i)) % MOD;
		y = (y * (r - i)) % MOD;
	}
	return x * modpow(y, MOD - 2) % MOD;
}

int main(){
	ll n, a, b; cin >> n >> a >> b;
	ll res = modpow(2, n) - 1 - nCr(n, a) - nCr(n, b);
	res %= MOD;
	res += MOD;
	res %= MOD;
	cout << res << '\n';
    return 0;
}
