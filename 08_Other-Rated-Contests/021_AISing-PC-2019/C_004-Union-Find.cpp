#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;

string s[404];
ll res, cntb, cntw;

int main() {
	int h, w; cin >> h >> w;
	dsu d(h * w);
	REP(i, h) cin >> s[i];
	REP(i, h) REP(j, w) {
		if (j < w - 1 && s[i][j] != s[i][j+1])
			d.merge(w*i+j, w*i+(j+1));
		if (i < h - 1 && s[i][j] != s[i+1][j])
			d.merge(w*i+j, w*(i+1)+j);
	}
	auto g = d.groups();
	REP(i, (int)g.size()) {
		cntb = cntw = 0;
		REP(j, (int)g[i].size()) {
			if (s[g[i][j]/w][g[i][j]%w] == '#') cntb++;
			else cntw++;
		}
		res += cntb * cntw;
	}
	cout << res << '\n';
}
