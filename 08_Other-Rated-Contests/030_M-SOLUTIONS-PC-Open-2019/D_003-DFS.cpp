#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;

int n, score, i;
int c[10001], res[10001];
vector<int> g[10001];

void dfs(int u, int p) {
	for (int v : g[u]) {
		if (v == p) continue ;
		dfs(v, u);
	}
	res[u] = c[i++];
}

int main() {
	cin >> n;
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		g[--a].push_back(--b);
		g[b].push_back(a);
	}
	REP(i, n) {
		cin >> c[i];
		score += c[i];
	}
	sort(c, c+n);
	dfs(0, -1);
	cout << score - c[n-1] << '\n';
	REP(i, n) cout << res[i] << " ";
	return 0;
}
