#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

bool seen[101];
vector<int> G[101];
int h[101];

int dfs(int v) {
	if (seen[v]) return 0;
	seen[v] = true;
	int res = 0;
	for (int nv : G[v])
		res += dfs(nv);
	if (res == 0) {
		if (h[v]) return 2;
		else return 0;
	}
	return res + 2;
}

int main() {
	int n, x; cin >> n >> x;
	x--;
	REP(i, n) cin >> h[i];
	REP(i, n-1) {
		int a, b; cin >> a >> b;
		a--, b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	cout << max(dfs(x)-2, 0) << '\n';
	return 0;
}
