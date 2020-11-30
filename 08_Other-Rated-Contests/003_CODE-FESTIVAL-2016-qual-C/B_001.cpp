#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int k, t; cin >> k >> t;
	vector<int> a(t);
	REP(i, t) cin >> a[i];

	sort(a.rbegin(), a.rend());
	int sum = accumulate(a.begin(), a.end(), 0);

	if (a[0] > k / 2) {
		cout << a[0] - 1 - (sum - a[0]) << '\n';
	} else
		cout << 0 << '\n';
	return 0;
}
