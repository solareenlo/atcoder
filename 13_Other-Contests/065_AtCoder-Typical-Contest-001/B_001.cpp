#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号 (例) par[3] = 2 : 3の親が2

	UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
		REP(i, N)
			par[i] = i;
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
		int rx = root(x); //xの根をrx
		int ry = root(y); //yの根をry
		if (rx == ry) return ; //xとyの根が同じ(=同じ木にある)時はそのまま
		par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
	}
};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, q; cin >> n >> q;
	UnionFind tree(n);

	REP(i, q) {
		int p, a, b; cin >> p >> a >> b;
		if (!p) {
			if (!tree.same(a, b))
				tree.unite(a, b);
		} else {
			if (tree.same(a, b))
				cout << "Yes" << '\n';
			else
				cout << "No" << '\n';
		}
	}
	return 0;
}
