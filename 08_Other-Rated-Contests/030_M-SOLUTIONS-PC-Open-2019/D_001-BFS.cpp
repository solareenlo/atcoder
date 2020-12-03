#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> g[n];
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		g[--a].push_back(--b);
		g[b].push_back(a);
	}

	vector<int> c(n);
	REP(i, n) cin >> c[i];
	sort(c.rbegin(), c.rend());

	vector<int> res(n);
	int i = 0;
	queue<int> q;
	q.push(0);
	int score = 0;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (res[now] > 0) continue ;
		if (i != 0) score += c[i];
		res[now] = c[i];
		i++;
		for (int next : g[now]) {
			if (res[next] > 0) continue ;
			q.push(next);
		}
	}
	cout << score << '\n';
	REP(i, n) {
		cout << res[i];
		if (i != n - 1) cout << " ";
		else cout << '\n';
	}
	return 0;
}
