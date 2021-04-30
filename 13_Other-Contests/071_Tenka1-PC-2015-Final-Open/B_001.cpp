#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int g[20][20];

int main() {
	int v, e, k; cin >> v >> e >> k;
	REP(i, e) {
		int a, b; cin >> a >> b;
		g[a][b] = g[b][a] = 1;
	}
	REP(bit, 1<<v) if (__builtin_popcount(bit) == k) {
		bool ok = true;
		REP(i, v) REP(j, i) if ((bit&(1<<i)) && (bit&(1<<j))) if(g[i][j])
			ok = false;
		if (ok) {
			REP(i, v) if (bit&(1<<i))
				cout << i << '\n';
			return 0;
		}
	}
	return 0;
}
