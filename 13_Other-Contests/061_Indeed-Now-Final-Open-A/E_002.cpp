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
	vector<double> res(n, 1.0), res2;
	res2 = res;
	REP(i, 500) {
		REP(j, n) {
			double sum = .0;
			for (auto a : g[j]) sum += res2[a] / num[a];
			res[j] = .1 + .9 * sum;
		}
		swap(res, res2);
	}
	for (auto a : res) printf("%.10f\n", a);
	return 0;
}
