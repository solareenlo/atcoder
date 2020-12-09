#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;

int main() {
	int n, m; cin >> n >> m;
	vector<int> p(n);
	REP(i, n) cin >> p[i], p[i]--;
	vector<int> x(m), y(m);
	REP(i, m) cin >> x[i] >> y[i], x[i]--, y[i]--;
	dsu d(n);
	REP(i, m) d.merge(x[i], y[i]);
	int res = 0;
	REP(i, n) if (d.same(i, p[i])) res++;
	cout << res << '\n';
    return 0;
}
