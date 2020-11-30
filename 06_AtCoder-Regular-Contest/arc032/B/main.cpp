#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号 (例) par[3] = 2 : 3の親が2
	vector<int> rank;

	UnionFind(int N) : par(N), rank(N) { // 最初は全てが根であるとして初期化
		REP(i, N) {
			par[i] = i;
			rank[i] = 0;
		}
	}

	int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
		if (par[x] == x) return x;
		return par[x] = root(par[x]);
	}

	bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
		int rx = root(x);
		int ry = root(y);
		return root(x) == root(y);
	}

	void unite(int x, int y) { // xとyの木を併合
		int rx = root(x); // xの根をrx
		int ry = root(y); // yの根をry
		if (rx == ry) return ; // xとyの根が同じ(=同じ木にある)時はそのまま
		if (rank[rx] < rank[ry])
			par[rx] = ry; // xの根rxをyの根ryにつける
		else {
			par[ry] = rx; // yの根ryをxの根rxにつける
			if (rank[rx] == rank[ry])
				rank[rx]++;
		}
	}
};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	UnionFind tree(n);
	REP(i, m) {
		int a, b; cin >> a >> b;
		tree.unite(--a, --b);
	}

	int cnt = 0;
	REP(i, n) {
		if (!tree.same(0, i)) {
			tree.unite(0, i);
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}
