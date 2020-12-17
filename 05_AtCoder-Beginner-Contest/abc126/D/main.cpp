#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

vector<P> G[100001];
int RES[100001];

void dfs(int now, int pre, int color) {
	RES[now] = color;
	for (auto g : G[now])
		if (g.first != pre)
			dfs(g.first, now, color^(g.second&1));
}

int main() {
	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int u, v, w; cin >> u >> v >> w;
		G[u].emplace_back(v, w);
		G[v].emplace_back(u, w);
	}
	dfs(1, 0, 0);
	for (int i = 1; i <= n; i++)
		cout << RES[i] << '\n';
}
