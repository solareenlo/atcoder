#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	int cnt = 1;
	int maxi = 0;
	int l, r;
	l = r = 0;
	REP(i, n - 1) {
		if (a[i + 1] - a[i] == 1) {
			cnt++;
			if (cnt > maxi) {
				r = i + 1;
				maxi = cnt;
			}
		} else cnt = 1;
	}
	l = max(0, r - maxi + 1);
	// cout << maxi << " l:" << l << " r:" << r << '\n';

	vector<int> b(n, 0);
	for (int i = l; i <= r; i++)
		b[i] = a[i];
	if (l == 0 && r == 0)
		REP(i, n) b[i] = a[i] + i;
	else {
		for (int i = r + 1; i < n; i++)
			if (i - 1 >= 0)
				b[i] = b[i - 1] + 1;
		for (int i = l - 1; i >= 0; i--)
			if (i >= 0)
				b[i] = b[i + 1] - 1;
	}
	// REP(i, n) cout << a[i] << ' ';
	// cout << '\n';
	// REP(i, n) cout << b[i] << ' ';
	// cout << '\n';

	ll res = 0;
	REP(i, n)
		res += abs(a[i] - b[i]);
	if (n == 1) res = 0;
	cout << res << '\n';
    return 0;
}
