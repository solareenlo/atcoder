#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	ll res = 0;
	REP(i, n - 1) {
		res += a[i] / 2;
		if (a[i] % 2 && a[i+1]) {
			res++;
			a[i+1]--;
		}
	}
	res += a[n-1] / 2;
	cout << res << '\n';
    return 0;
}
