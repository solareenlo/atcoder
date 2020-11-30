#include <bits/stdc++.h>
using namespace std;
const int MAX = 2020;
const int MOD = 1000000007;
long long fact[MAX], fact_inv[MAX], inv[MAX];
void init_nCk() {
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
}
long long nCk(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
    return fact[n] * (fact_inv[k] * fact_inv[n - k] % MOD) % MOD;
}
int main() {
	int n, k; cin >> n >> k;
	init_nCk();
	for (int i = 1; i <= k; i++)
		cout << (nCk(n-k+1, i) * nCk(k-1, i-1)) % MOD << '\n';
    return 0;
}
