#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<int, vector<int> > g;
	for (int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	queue<int> q;
	q.push(1);
	map<int, int> depth, prev;
	depth[1] = 0;
	prev[1] = -1;
	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (auto &e : g[now]) if (e != prev[now]) {
			if (depth.find(e) != depth.end()) {
				int l = depth[now]+depth[e]+1;
				cout << 1+l/n << " " << n-l%2 << '\n';
				return 0;
			}
			q.push(e);
			depth[e] = depth[now]+1;
			prev[e] = now;
		}
	}
	return 0;
}
