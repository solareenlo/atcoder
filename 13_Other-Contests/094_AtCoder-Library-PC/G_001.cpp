#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;

int main() {
	int n, m; cin >> n >> m;
	scc_graph graph(n);
	REP(i, m) {
		int a, b; cin >> a >> b;
		graph.add_edge(a, b);
	}

	auto scc = graph.scc();
	cout << scc.size() << '\n';

	for (auto v : scc) {
		cout << v.size() << '\n';
		for (auto x : v)
			cout << " " << x;
		cout << '\n';
	}
	return 0;
}
