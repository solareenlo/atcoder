#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n, 0);
	REP(i, n) cin >> a[i];

	ll sum = accumulate(a.begin(), a.end(), 0LL);
	ll sumO = 0;
	REP(i, n)
		if (i % 2)
			sumO += a[i];

	vector<ll> res(n, 0);
	res[0] = sum - 2 * sumO;
	REP(i, n - 1) {
		res[i + 1] = 2 * a[i] - res[i];
	}
	REP(i, n) {
		cout << res[i];
		if (i != n - 1)
			cout << " ";
	}
	cout << '\n';
    return 0;
}
