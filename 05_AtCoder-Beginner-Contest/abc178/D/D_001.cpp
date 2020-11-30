#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	ll s; cin >> s;
	vector<ll> res(s + 1, 0);
	res[3] = res[4] = res[5] = 1;
	for (ll i = 6; i <= s; i++) {
		res[i] = res[i-2] + res[i-3] + res[i-4];
		res[i] %= MOD;
	}
	cout << res[s] << '\n';
    return 0;
}
