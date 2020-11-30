#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k , res;
ll f(ll k) { return max(0LL, n-abs(k-n-1)); }
int main() {
	cin >> n >> k;
	for (ll i = 2; i <= 2*n; i++)
		res += f(i) * f(i - k);
	cout << res << '\n';
	return 0;
}
