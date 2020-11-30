#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

struct Edge {
	int to; // 辺の行き先
	ll cost; // その辺を通るコスト
	Edge(int t, ll c) : to(t), cost(c) { }
};

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int N; cin >> N; // 頂点の数は N
	vector<vector<Edge> > G(N);
	// グラフを隣接リストでセットする
	REP(i, N - 1) { // 辺の数は N - 1
		int a, b; cin >> a >> b; a--; b--;
		ll c; cin >> c;
		G[a].push_back(Edge(b, c));
		G[b].push_back(Edge(a, c));
	}
	int Q; cin >> Q;
	int K; cin >> K; K--; // K が始点
	vector<int> x(Q), y(Q); REP(i, Q) cin >> x[i] >> y[i];
	REP(i, Q) {
		x[i]--;
		y[i]--;
	}

	// 最短距離を初期化
	vector<ll> d(N, (ll)1e18);
	d[K] = 0; // 始点 K への最短距離は 0
	// 距離が小さい順に取り出せるよう greater<P> を指定
    priority_queue<P, vector<P>, greater<P> > que;
	que.push(P(0, K));
	while (!que.empty()) {
		P p = que.top();
		que.pop();
		int v = p.second; // 更新した頂点の中で距離が最小の頂点 v
		if (d[v] < p.first) continue;
		for (auto e : G[v]) { // 頂点 v から出る辺 e を走査
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}

	REP(i, Q) cout << d[x[i]] + d[y[i]] << '\n';
    return 0;
}
