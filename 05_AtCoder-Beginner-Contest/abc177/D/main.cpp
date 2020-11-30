#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++)
			par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }
};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	UnionFind tree(n);

	set<int> s;
	REP(i, m) {
		int a, b; cin >> a >> b;
		s.insert(a - 1);
		s.insert(b - 1);
		tree.unite(a - 1, b - 1);
	}

	map<int, int> cnt;
	for (auto x : s)
		cnt[tree.root(x)]++;

	int maxi = 0;
	for (auto x : cnt)
		maxi = max(maxi, x.second);
	if (m == 0) maxi = 1;
	cout << maxi << '\n';
	return 0;
}
