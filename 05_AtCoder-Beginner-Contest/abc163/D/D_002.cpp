#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	ll n, k; cin >> n >> k;
	ll mini, maxi, res;
	mini = maxi = res = 0;
	REP(i, k - 1) {
		mini += i;
		maxi += n - i;
	}
	for (ll i = k - 1; i < n + 1; i++) {
		mini += i;
		maxi += n - i;
		res += maxi - mini + 1;
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
