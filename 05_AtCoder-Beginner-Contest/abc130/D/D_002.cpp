#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	ll k; cin >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	ll res, sum;
	res = sum = 0;
	int r = 0;
	REP(l, n) {
		while (sum < k) {
			if (r == n) break ;
			else {
				sum += a[r];
				r++;
			}
		}
		if (sum < k) break ;
		res += n - r + 1;
		sum -= a[l];
	}
	cout << res << '\n';
	return 0;
}
