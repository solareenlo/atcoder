#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int r, c, d;
	cin >> r >> c >> d;
	vector<vector<int> > a(r, vector<int>(c));
	REP(i, r) REP(j, c) cin >> a[i][j];

	int maxi = 0;
	REP(i, r) REP(j, c) {
		if (i + j <= d && (i + j) % 2 == d % 2) {
			maxi = max(maxi, a[i][j]);
		}
	}
	cout << maxi << '\n';
    return 0;
}
