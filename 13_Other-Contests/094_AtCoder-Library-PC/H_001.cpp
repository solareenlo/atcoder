#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;

int main() {
	int n, d; cin >> n >> d;
	vector<int> x(n), y(n);
	REP(i, n) cin >> x[i] >> y[i];

	two_sat ts(n);
	REP(i, n) for (int j = i+1; j < n; j++) {
		if (abs(x[i] - x[j]) < d) ts.add_clause(i, false, j, false);
		if (abs(x[i] - y[j]) < d) ts.add_clause(i, false, j, true);
		if (abs(y[i] - x[j]) < d) ts.add_clause(i, true, j, false);
		if (abs(y[i] - y[j]) < d) ts.add_clause(i, true, j, true);
	}

	if (ts.satisfiable()) {
		cout << "Yes" << '\n';
		auto ans = ts.answer();
		REP(i, n)
			cout << (ans[i] ? x[i] : y[i]) << '\n';
	} else
		cout << "No" << '\n';
	return 0;
}
