#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int n, a[100004];
ll res, sum[100004];
int main() {
	cin >> n;
	REP(i, n + 1) cin >> a[i];
	for (int i = n; i >= 0; i--) sum[i] = sum[i+1] + a[i];
	ll now = 1;
	REP(i, n + 1) {
		if (a[i] > now) {
			cout << "-1" << '\n';
			return 0;
		}
		res += now;
		now -= a[i];
		now = min(2 * now, sum[i+1]);
	}
	cout << res << '\n';
	return 0;
}
