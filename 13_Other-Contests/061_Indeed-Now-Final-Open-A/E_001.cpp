#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> num(n), g[n];
	REP(i, m) {
		int a, b; cin >> a >> b;
		g[--b].emplace_back(--a);
		num[a]++;
	}
	vector<double> res(n, 1.0);
	REP(_, 500) REP(i, n) {
		double t = .1;
		for (int j : g[i])
			t += .9 * res[j] / num[j];
		res[i] = t;
	}
	for (auto x : res) printf("%.10f\n", x);
	return 0;
}
