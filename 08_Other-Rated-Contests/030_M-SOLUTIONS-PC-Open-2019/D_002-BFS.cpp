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
	int score = 0;
	REP(i, n) {
		cin >> c[i];
		score += c[i];
	}
	sort(c.rbegin(), c.rend());

	queue<int> q;
	q.push(0);
	vector<int> res(n, -1);
	int i = 0;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		res[now] = c[i++];
		for (int next : g[now])
			if (res[next] == -1) q.push(next);
	}

	cout << score - c[0] << '\n';
	REP(i, n) cout << res[i] << " ";
	return 0;
}
