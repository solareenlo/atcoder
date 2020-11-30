#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {0, 1, 0,-1};
const int dy[4] = {-1,0, 1, 0};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<vector<int> > b(n, vector<int>(m, 0));
	REP(i, n) {
		string s; cin >> s;
		REP(j, m) b[i][j] = s[j] - '0';
	}

	vector<vector<int> > res(n, vector<int>(m, 0));
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < m - 1; j++) {
			REP(k, 4) res[i+dy[k]][j+dx[k]] += b[i][j];
		}
	}

	cout << '\n';
	REP(i, n) {
		REP(j, m) cout << res[i][j];
		cout << '\n';
	}
	return 0;
}
