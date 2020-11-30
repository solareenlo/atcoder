#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	set<int> a, b;
	while (n--) { int t; cin >> t; a.insert(t); }
	while (m--) { int t; cin >> t; b.insert(t); }
	for (auto x : a)
		if (b.count(x))
			cout << x << '\n';
	return 0;
}
