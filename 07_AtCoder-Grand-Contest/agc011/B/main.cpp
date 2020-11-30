#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	vector<ll> s(n + 1, 0);
	REP(i, n) s[i+1] += s[i] + a[i];
	// REP(i, n) cout << a[i] << " ";
	// cout << '\n';
	// REP(i, n) cout << s[i+1] << " ";
	// cout << '\n';

	vector<bool> res(n, true);
	REP(i, n - 1)
		if (s[i+1] * 2 < a[i+1])
			res[i] = false;
	// REP(i, n) cout << res[i] << " ";
	// cout << '\n';

	int cnt = 0;
	REP(i, n) {
		if (res[i]) cnt++;
		else cnt = 0;
	}
	cout << cnt << '\n';
    return 0;
}
