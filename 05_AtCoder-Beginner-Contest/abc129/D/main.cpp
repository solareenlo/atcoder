#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
const int MAX = 2004;
int L[MAX][MAX], R[MAX][MAX], D[MAX][MAX], U[MAX][MAX];

int main() {
	int h, w; cin >> h >> w;
	vector<vector<char> > s(h+2, vector<char>(w+2));
	REP(i, h) REP(j, w) cin >> s[i][j];
	REP(i, h) REP(j, w) {
		if (s[i][j] == '#') continue ;
		L[i][j] = L[i][j-1] + 1;
	}
	REP(i, h) for (int j = w; j > 0; j--) {
		if (s[i][j] == '#') continue ;
		R[i][j] = R[i][j+1] + 1;
	}
	REP(j, w) REP(i, h) {
		if (s[i][j] == '#') continue ;
		D[i][j] = D[i-1][j] + 1;
	}
	REP(j, w) for (int i = h; i > 0; i--) {
		if (s[i][j] == '#') continue ;
		U[i][j] = U[i+1][j] + 1;
	}
	int res = 0;
	REP(i, h) REP(j, w)
		res = max(res, L[i][j] + R[i][j] + D[i][j] + U[i][j] - 3);
	cout << res << '\n';
	return 0;
}
