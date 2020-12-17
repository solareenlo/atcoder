#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n; cin >> n;
	vector<vector<P> > g(n);
	REP(i, n-1) {
		int a, b, w; cin >> a >> b >> w; a--; b--;
		g[a].push_back(make_pair(b, w));
		g[b].push_back(make_pair(a, w));
	}
	vector<int> res(n, -1);
	queue<int> q;
	res[0] = 0;
	q.push(0);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (auto p : g[v]) {
			int a = p.first;
			int b = p.second;
			if (res[a] != -1) continue ;
			res[a] = (res[v] + b) % 2;
			q.push(a);
		}
	}
	for (int x : res) cout << x << '\n';
    return 0;
}
