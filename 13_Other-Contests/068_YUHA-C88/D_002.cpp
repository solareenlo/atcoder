#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int S, G, mini = 2e9;
vector<vector<pair<int, int> > > g(9);
vector<int> used(32);
vector<string> s(9);
string a, res;

void dfs(int cur, int dir, int dist) {
	if (cur == G) dir = 1;
	if (cur == S && dir) {
		if (dist < mini || a < res) {
			mini = dist;
			res = a;
		}
		return ;
	}
	if (dist >= mini) return ;
	for (auto &&i : g[cur]) {
		if (!used[i.second]) {
			used[i.second] = 1;
			a += s[i.first];
			dfs(i.first, dir, dist+1);
			for (auto &&j : s[i.first])
				a.pop_back();
			used[i.second] = 0;
		}
	}
}

int main() {
	int n; cin >> n;
	map<string, int> m;
	REP(i, n) {
		cin >> s[i];
		m[s[i]] = i;
	}
	int M; cin >> M;
	REP(i, M) {
		string a, b; cin >> a >> b;
		g[m[a]].emplace_back(m[b], i);
		g[m[b]].emplace_back(m[a], i);
	}
	string c, d; cin >> c >> d;
	S = m[c];
	G = m[d];
	a = s[S];
	dfs(S, 0, 0);
	for (auto &&i : s[S]) res.pop_back();
	cout << res << '\n';
	return 0;
}
