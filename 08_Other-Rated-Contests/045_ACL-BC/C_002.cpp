#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int n, m; cin >> n >> m;
	dsu d(n);
	while (m--) {
		int u, v; cin >> u >> v;
		d.merge(u - 1, v - 1);
	}
	cout << d.groups().size() - 1 << '\n';
	return 0;
}
