#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main() {
	int n; cin >> n;
	int64_t a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n);
	int64_t res = 0, p = 0;
	for (int i=n-1; i>=0; i--) {
		(res += a[i]*(a[i]+p)) %= MOD;
		p = (2*p+a[i])%MOD;
	}
	cout << res << '\n';
    return 0;
}
