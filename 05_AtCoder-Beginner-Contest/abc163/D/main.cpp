#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	ll n, k; cin >> n >> k;
	ll res = 0;
	for (ll i = k; i <= n + 1; i++) {
		// i == その範囲の数の個数
		// (i - 1) == その範囲における数の最大値
		// (i - 1) * i / 2 == その範囲の数の合計値
		ll l = (i - 1) * i / 2; // i 個の数を選ぶ場合の和としてあり得る最小値
		ll r = n * i - l; // i 個の数を選ぶ場合の和としてあり得る最大値
		res += r - l + 1;
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
