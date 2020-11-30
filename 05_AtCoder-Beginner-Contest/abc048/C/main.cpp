#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	ll x;
	cin >> x;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	ll res = 0;
	REP(i, n - 1) {
		ll tmp = (a[i] + a[i + 1]) - x;
		if (tmp > 0) {
			res += tmp;
			ll diff = tmp - a[i + 1];
			if (diff > 0) {
				a[i + 1] = 0;
				a[i] -= diff - a[i + 1];
			} else a[i + 1] -= tmp;
		}
	}

	cout << res << '\n';
    return 0;
}
