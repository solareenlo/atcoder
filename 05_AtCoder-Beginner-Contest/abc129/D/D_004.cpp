#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<string> s(h);
	REP(i, h) cin >> s[i];
	vector<vector<int> > cnt(h, vector<int>(w));
	REP(i, h) {
		vector<int> done(w);
		REP(j ,w) {
			if (s[i][j] == '#') continue ;
			if (done[j]) continue ;
			int len = 0;
			while (j + len < w) {
				if (s[i][j+len] == '#') break ;
				len++;
			}
			REP(k, len) {
				cnt[i][j+k] += len;
				done[j+k] = 1;
			}
		}
	}
	REP(j, w) {
		vector<int> done(h);
		REP(i, h) {
			if (s[i][j] == '#') continue ;
			if (done[i]) continue ;
			int len = 0;
			while (i + len < h) {
				if (s[i+len][j] == '#') break ;
				len++;
			}
			REP(k, len) {
				cnt[i+k][j] += len;
				done[i+k] = 1;
			}
		}
	}
	int res = 0;
	REP(i, h) REP(j, w) res = max(res, cnt[i][j]-1);
	cout << res << '\n';
	return 0;
}
