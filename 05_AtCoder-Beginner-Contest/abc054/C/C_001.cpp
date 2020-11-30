#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int NMAX = 8;
bool graph[NMAX][NMAX];

int dfs(int v, int n, bool visited[NMAX]) {
	bool all_visited = true;
	REP(i, n) {
		if (!visited[i])
			all_visited = false;
	}
	if (all_visited)
		return 1;

	int res = 0;
	REP(i, n) {
		if (!graph[v][i]) continue ;
		if (visited[i]) continue ;
		visited[i] = true;
		res += dfs(i, n, visited);
		visited[i] = false;
	}
	return res;
}

int main() {
	int n, m; cin >> n >> m;
	REP(i, m) {
		int a, b; cin >> a >> b;
		graph[a-1][b-1] = graph[b-1][a-1] = true;
	}
	bool visited[NMAX] = {0};
	visited[0] = true;
	cout << dfs(0, n, visited) << '\n';
    return 0;
}
