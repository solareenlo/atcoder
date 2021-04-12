#include <bits/stdc++.h>
#define REP(i, n) for (int i=1; i<(n); i++)
using namespace std;

int c[100010], s[100010];
vector<int> e[100010], res;

void dfs(int u, int f) {
	if (s[c[u]] == 0)
		res.push_back(u);
	s[c[u]]++;
	for (auto v : e[u]) if (v!=f)
		dfs(v, u);
	s[c[u]]--;
}

int main() {
	int n; cin >> n;
	REP(i, n+1)
		cin >> c[i];
	REP(i, n) {
		int a, b; cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}
	dfs(1, 0);
	sort(res.begin(), res.end());
	for (auto x : res)
		cout << x << '\n';
	return 0;
}
