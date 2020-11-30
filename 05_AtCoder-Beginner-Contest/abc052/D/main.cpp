#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	ll a, b; cin >> a >> b;
	vector<ll> x(n);
	REP(i, n) cin >> x[i];

	ll res = 0;
	REP(i, n - 1) {
		ll tmp = x[i + 1] - x[i];
		if (tmp * a >= b) res += b;
		else res += tmp * a;
	}

	cout << res << '\n';
    return 0;
}
