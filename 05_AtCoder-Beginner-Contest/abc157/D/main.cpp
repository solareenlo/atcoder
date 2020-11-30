#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
namespace atcoder {
struct dsu {
  public:
    dsu() : _n(0) {}
    dsu(int n) : _n(n), parent_or_size(n, -1) {}

    int merge(int a, int b) {
        int x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        return x;
    }

    bool same(int a, int b) { return leader(a) == leader(b); }

    int leader(int a) {
        if (parent_or_size[a] < 0) return a;
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    int size(int a) { return -parent_or_size[leader(a)]; }

  private:
    int _n;
    std::vector<int> parent_or_size;
};
}
using namespace atcoder;

int main() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> res(n, 0);
	dsu dsu(n);
	REP(i, m) {
		int a, b; cin >> a >> b;
		dsu.merge(--a, --b);
		res[a]--;
		res[b]--;
	}
	REP(i, n) res[i] += dsu.size(i) - 1;
	REP(i, k) {
		int c, d; cin >> c >> d;
		if (dsu.same(--c, --d)) {
			res[c]--;
			res[d]--;
		}
	}
	REP(i, n) cout << res[i] << " ";
    return 0;
}
