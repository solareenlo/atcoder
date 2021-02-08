#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	string s[h];
	REP(i, h) cin >> s[i];
	int res = 0;
	REP(i, h-1) REP(j, w-1) {
		int cnt = 0;
		REP(x, 2) REP(y, 2)
			if (s[i+y][j+x] == '#') cnt++;
		if (cnt%2) res++;
	}
	cout << res << '\n';
    return 0;
}
