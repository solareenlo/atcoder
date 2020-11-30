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
	for (auto x : a)
		if (b.count(x))
			cout << x << '\n';
	return 0;
}
