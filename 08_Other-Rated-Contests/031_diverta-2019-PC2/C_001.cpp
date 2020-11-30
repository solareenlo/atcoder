#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());

	int start = n - 1;
	for (int i = 1; i < n; i++) {
		if (a[i] < 0) {
			start = i;
			break ;
		}
	}

	ll res = 0;
	REP(i, start) res += a[i];
	for (int i = start; i < n; i++) res -= a[i];
	cout << res << '\n';

	for (int i = 1; i < start; i++) {
		cout << a[start] << " " << a[i] << '\n';
		a[start] -= a[i];
	}
	for (int i = start; i < n; i++) {
		cout << a[0] << " " << a[i] << '\n';
		a[0] -= a[i];
	}
	return 0;
}
