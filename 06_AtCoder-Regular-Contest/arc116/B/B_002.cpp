#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main() {
	int n; cin >> n;
	int64_t a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n);
	int64_t res = 0;
	for (int64_t i=0, sum=0; i<n; i++) {
		(res += (sum+a[i])*a[i]) %= MOD;
		sum = (sum*2+a[i])%MOD;
	}
	cout << res << '\n';
	return 0;
}
