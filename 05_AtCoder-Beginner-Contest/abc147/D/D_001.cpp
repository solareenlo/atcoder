#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

int main() {
	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	ll res = 0;
	REP(i, 60) { // 桁を縦に見ていく
		ll one = 0;
		REP(j, n) if (a[j] >> i & 1) one++; // bit が 1 の個数
		ll zero = n - one; // bit が 0 の個数
		ll now = one * zero % MOD; // 0 と 1 の組合せの個数
		REP(j, i) now = now * 2 % MOD;
		res += now;
		res %= MOD;
	}
	cout << res << '\n';
    return 0;
}
