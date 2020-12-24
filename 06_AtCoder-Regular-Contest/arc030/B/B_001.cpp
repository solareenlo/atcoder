#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

vector<int> G[101];
int h[101];

int dfs(int v, int prev) {
	int res = 0;
	for (int nv : G[v]) if (nv != prev) res += dfs(nv, v);
	if (res) return res + 2 * !!(~prev);
	return h[v] * 2 * !!(~prev);
}

int main() {
	int n, k; cin >> n >> k;
	k--;
	REP(i, n) cin >> h[i];
	REP(i, n-1) {
		int a, b; cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	cout << dfs(k, -1) << '\n';
    return 0;
}
