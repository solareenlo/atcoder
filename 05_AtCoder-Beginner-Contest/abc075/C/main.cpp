#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using Graph = vector<vector<int> >;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
	seen[v] = true; // v を訪問済みにする

	// v から行ける各頂点 next_v について
	for (auto next_v : G[v]) {
		if (seen[next_v]) continue ;
		dfs(G, next_v);
	}
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	REP(i, m) cin >> a[i] >> b[i];
	REP(i, m) a[i]--, b[i]--;

	int cnt = 0;
	REP(i, m) {
		// グラフをセットする
		Graph G(n);
		REP(j, m)
			if (i != j) {
				G[a[j]].push_back(b[j]);
				G[b[j]].push_back(a[j]);
			}
		// 頂点 a[i] をスタートした探索を行う
		seen.assign(n, false); // 全頂点を『未訪問』に初期化
		dfs(G, a[i]);
		if (!seen[b[i]]) cnt++;
	}

	cout << cnt << '\n';
    return 0;
}
