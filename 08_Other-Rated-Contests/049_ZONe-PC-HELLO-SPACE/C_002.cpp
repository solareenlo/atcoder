#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n][5];
	REP(i, n) REP(j, 5) cin >> a[i][j];
	int l = 0, r = 1e9+1;
	while (r-l > 1) {
		int m = (l+r)/2;
		set<int> s;
		REP(i, n) {
			int x = 0;
			REP(j, 5) if (a[i][j] >= m)
				x |= 1<<j;
			s.insert(x);
		}
		int x = 0;
		for (int i : s) for (int j : s) for (int k : s)
			x = max(x, i | j | k);
		(x==31?l:r) = m;
	}
	cout << l << '\n';
	return 0;
}
