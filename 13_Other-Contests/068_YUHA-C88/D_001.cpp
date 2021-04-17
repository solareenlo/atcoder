#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
using pq = tuple<int, int, int, string, int64_t>;

int main() {
	int n; cin >> n;
	map<string, int> s;
	REP(i, n) {
		string S; cin >> S;
		s[S] = i;
	}
	int m; cin >> m;
	vector<vector<pair<string, int> > > g(n);
	REP(i, m) {
		string A, B; cin >> A >> B;
		g[s[A]].emplace_back(B, i);
		g[s[B]].emplace_back(A, i);
	}
	string c, d; cin >> c >> d;
	auto cmp = [](const auto &l, const auto &r) {
		if (get<0>(l) == get<0>(r))
			return get<3>(l) > get<3>(r);
		else
			return get<0>(l) > get<0>(r);
	};
	priority_queue<pq, vector<pq>, decltype(cmp)> q(cmp);
	q.emplace(0, s[c], 0, c, 0L);
	vector<vector<int> > vis(2, vector<int>(n, INT_MAX));
	vis[0][s[c]] = 0;
	while (!q.empty()) {
		const auto [step, u, word, route, hist] = q.top();
		q.pop();
		if (word && u == s[c]) {
			cout << route << '\n';
			return 0;
		}
		for (const auto [v, e] : g[u]) {
			if (hist & (1<<e)) continue ;
			int nword = 0;
			if (word==1 || s[v] == s[d]) nword = 1;
			string nroute = route;
			if (s[v] != s[c]) nroute += v;
			q.emplace(step+1, s[v], nword, nroute, hist | (1L<<e));
		}
	}
	return 0;
}
