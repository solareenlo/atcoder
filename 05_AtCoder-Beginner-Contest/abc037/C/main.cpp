#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	vector<ll> s(n + 1, 0);
	REP(i, n) s[i + 1] = s[i] + a[i];

	ll ans = 0;
	REP(i, n)
		if (i + n - k + 1 <= n)
			ans += s[i + n - k + 1] - s[i];
	cout << ans << '\n';
	return 0;
}
