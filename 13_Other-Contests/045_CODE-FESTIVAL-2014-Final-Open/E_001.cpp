#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> r(n);
	REP(i, n) cin >> r[i];

	int res = n;
	for (int i = 2; i < n; i++) {
		if (r[i-2] <= r[i-1] && r[i-1] <= r[i]) {
			res--;
			r[i-1] = r[i-2];
		}
		else if (r[i-2] >= r[i-1] && r[i-1] >= r[i]) {
			res--;
			r[i-1] = r[i-2];
		}
	}
	cout << (res < 3 ? 0 : res) << '\n';
	return 0;
}
