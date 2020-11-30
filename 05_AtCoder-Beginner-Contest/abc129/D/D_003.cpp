#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<string> s(h);
	REP(i, h) cin >> s[i];
	vector<vector<int> > cnt(h, vector<int>(w)); // 何マス照らせるかのカウント

	// 横方向に'.'のマスが連続して何個あるかを判定
	REP(i, h) {
		vector<int> done(w);
		REP(j, w) {
			if (s[i][j] == '#') continue ;
			if (done[j]) continue ;
			int len = 0; // '.'が何マス連続しているかの長さ
			while (j + len < w) {
				if (s[i][j+len] == '#') break ;
				len++;
			}
			REP(k, len) { // '.'が連続しているマスにその個数を代入
				cnt[i][j+k] += len;
				done[j+k] = 1;
			}
		}
	}
	// 縦方向に'.'のマスが連続して何個あるかを判定
	REP(j, w) {
		vector<int> done(h);
		REP(i, h) {
			if (s[i][j] == '#') continue ;
			if (done[i]) continue ;
			int len = 0; // '.'が何マス連続しているかの長さ
			while (i + len < h) {
				if (s[i+len][j] == '#') break ;
				len++;
			}
			REP(k, len) { // '.'が連続しているマスにその個数を代入
				cnt[i+k][j] += len;
				done[i+k] = 1;
			}
		}
	}

	int maxi = 0;
	REP(i, h) REP(j, w) maxi = max(maxi, cnt[i][j]-1);
	cout << maxi << '\n';
	return 0;
}
