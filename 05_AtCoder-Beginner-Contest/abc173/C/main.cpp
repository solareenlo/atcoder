#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w, k; cin >> h >> w >> k;
	vector<string> c(h);
	REP(i, h) cin >> c[i];
	int res = 0;
	REP(bit, 1<<h) REP(bit2, 1<<w) {
		int cnt = 0;
		REP(i, h) REP(j, w) {
			if (!(bit & (1<<i)) && !(bit2 & (1<<j)) && c[i][j] == '#')
				cnt++;
		}
		if (cnt == k)
			res++;
	}
	cout << res << '\n';
	return 0;
}
