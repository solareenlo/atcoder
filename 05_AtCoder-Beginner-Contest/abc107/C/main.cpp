#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<ll> x(n);
	REP(i, n) cin >> x[i];

	ll res = 1e18;
	REP(i, n - k + 1) {
		ll l = abs(x[i]) + abs(x[k-1+i] - x[i]);
		ll r = abs(x[k-1+i]) + abs(x[k-1+i] - x[i]);
		res = min(res, min(l, r));
	}
	cout << res << '\n';
    return 0;
}
