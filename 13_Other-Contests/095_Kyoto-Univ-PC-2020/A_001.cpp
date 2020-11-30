#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	REP(i, n) cin >> x[i] >> y[i];
	int res = 0;
	REP(i, n - 1)
		res += abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);
	cout << res << '\n';
	return 0;
}
