#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll INF = 0xffffffff;

int main() {
	int n, k; cin >> n >> k;

	mcf_graph<int, ll> g(2 * n + 2);

	int s = 2 * n;
	int t = 2 * n + 1;
	g.add_edge(s, t, n * k, INF);

	REP(i, n) {
		g.add_edge(s, i, k, 0);
		g.add_edge(n + i, t, k , 0);
	}
	REP(i, n) REP(j, n) {
		ll a; cin >> a;
		g.add_edge(i, n + j, 1, INF - a);
	}
	auto res = g.flow(s, t, n * k);
	cout << 1LL * n * k * INF - res.second << '\n';

	vector<string> grid(n, string(n, '.'));
	for (auto e : g.edges()) {
		if (e.from == s || e.to == t || e.flow == 0) continue ;
		grid[e.from][e.to - n] = 'X';
	}
	REP(i, n) cout << grid[i] << '\n';
	return 0;
}
