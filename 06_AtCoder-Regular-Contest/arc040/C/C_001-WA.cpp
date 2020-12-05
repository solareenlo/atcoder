#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<string> s(n);
	REP(i, n) cin >> s[i];

	int res = 0;
	while (1) {
		int cnt = 0;
		REP(i, n) REP(j, n) if (s[i][j] == '.') cnt++;
		if (cnt == 0) break ;
		REP(i, n) {
			bool hit = false;
			int index = 0;
			REP(j, n) {
				if (hit && s[i][j] == 'o') break ;
				if (s[i][j] == '.') {
					s[i][j] = 'o';
					hit = true;
					index = j;
				}
			}
			if (hit && i < n - 1 && s[i+1][index] == '.') {
				bool hit = false;
				REP(j, n) {
					if (hit && s[i+1][j] == 'o') break ;
					if (j >= index && s[i+1][j] == '.') {
						s[i+1][j] = 'o';
						hit = true;
					}
				}
			}
			if (hit) {
				res++;
				break ;
			}
		}
	}
	cout << res << '\n';
    return 0;
}
