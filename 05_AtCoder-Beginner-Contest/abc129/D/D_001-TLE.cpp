#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<string> s(h);
	REP(i, h) cin >> s[i];
	int maxi = 0;
	REP(i, h) REP(j, w) {
		if (s[i][j] == '#') continue ;
		int cnt = 1;
		for (int k = j+1; k < w; k++) {
			if (s[i][k] == '#') break ;
			cnt++;
		}
		for (int k = j-1; k >= 0; k--) {
			if (s[i][k] == '#') break ;
			cnt++;
		}
		for (int k = i+1; k < h; k++) {
			if (s[k][j] == '#') break ;
			cnt++;
		}
		for (int k = i-1; k >= 0; k--) {
			if (s[k][j] == '#') break ;
			cnt++;
		}
		maxi = max(maxi, cnt);
	}
	cout << maxi << '\n';
    return 0;
}
