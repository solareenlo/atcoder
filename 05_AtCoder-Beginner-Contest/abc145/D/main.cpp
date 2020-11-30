#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1e6;
const int MOD = 1e9 + 7;

ll fac[MAX], finv[MAX], inv[MAX];

inline void init_nCk() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++){
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

inline ll nCk(int n, int k){
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
	int x, y; cin >> x >> y;
	ll res = 0;
	if ((x + y) % 3 == 0) {
		int n = (x + y) / 3;
		int k = min(x, y) - n;
		init_nCk();
		res = nCk(n, k);
	}
	cout << res << '\n';
    return 0;
}
