#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	set<int> a, b;
	REP(i, n) {
		int t; cin >> t;
		a.insert(t);
	}
	REP(i, m) {
		int t; cin >> t;
		b.insert(t);
	}
	set<int> res;
	set_intersection(a.begin(), a.end(),
			b.begin(), b.end(),
			inserter(res, res.end()));
	for (auto x : res)
		cout << x << '\n';
	return 0;
}
