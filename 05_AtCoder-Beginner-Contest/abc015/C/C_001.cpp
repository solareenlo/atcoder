#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	vector<vector<int> > t(n, vector<int>(k));
	REP(i, n) REP(j, k) cin >> t[i][j];

	bool ok = true;
	int x;
	if (n == 5) {
		REP(i, k) REP(j, k) REP(l, k) REP(m, k) REP(n, k) {
			x = t[0][i]^t[1][j]^t[2][l]^t[3][m]^t[4][n];
			if (!x) ok = false;
		}
	} else if (n == 4) {
		REP(i, k) REP(j, k) REP(l, k) REP(m, k) {
			x = t[0][i]^t[1][j]^t[2][l]^t[3][m];
			if (!x) ok = false;
		}
	} else if (n == 3) {
		REP(i, k) REP(j, k) REP(l, k) {
			x = t[0][i]^t[1][j]^t[2][l];
			if (!x) ok = false;
		}
	} else if (n == 2) {
		REP(i, k) REP(j, k) {
			x = t[0][i]^t[1][j];
			if (!x) ok = false;
		}
	} else if (n == 1) {
		REP(i, k) {
			x = t[0][i];
			if (!x) ok = false;
		}
	}

	if (ok) cout << "Nothing" << '\n';
	else cout << "Found" << '\n';
    return 0;
}
