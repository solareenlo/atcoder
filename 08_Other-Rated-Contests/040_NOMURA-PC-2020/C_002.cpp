#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[100004];
ll sum[100004], res, now = 1;
int main() {
	cin >> n;
	for (int i = 0; i <= n; i++) cin >> a[i];
	for (int i = n; i >= 0; i--) sum[i] = sum[i+1] + a[i];
	for (int i = 0; i <= n; i++) {
		res += now;
		now = now - a[i];
		if (now < 0) { res = -1; break ; }
		now = min(now * 2, sum[i+1]);
	}
	cout << res << '\n';
	return 0;
}
