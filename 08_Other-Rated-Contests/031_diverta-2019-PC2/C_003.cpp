#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	int j = lower_bound(a.begin(), a.end(), 0) - a.begin();
	if (j == n) j--;
	if (j == 0) j++;
	int sum = 0;
	REP(i, j) sum -= a[i];
	for (int i = j; i < n; i++) sum += a[i];
	cout << sum << '\n';
	for (int i = j; i < n - 1; i++) {
		cout << a[0] << " " << a[i] << '\n';
		a[0] -= a[i];
	}
	REP(i, j) {
		cout << a[n-1] << " " << a[i] << '\n';
		a[n-1] -= a[i];
	}
	return 0;
}
