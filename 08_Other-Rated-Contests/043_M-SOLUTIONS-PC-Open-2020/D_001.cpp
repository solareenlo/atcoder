#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	ll res = 1000;
	ll stock = 0;
	REP(i, n - 1) {
		if (a[i] < a[i + 1] && res >= a[i]) {
			stock = res / a[i];
			res %= a[i];
		} else if (a[i] > a[i + 1] && stock > 0) {
			res += stock * a[i];
			stock = 0;
		}
	}

	cout << res + stock * a[n - 1] << '\n';
	return 0;
}
