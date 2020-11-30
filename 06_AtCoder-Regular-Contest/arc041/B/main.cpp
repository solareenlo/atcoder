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
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < m - 1; j++) {
			res[i+1][j] = b[i][j];
			int tmp = b[i][j];
			REP(k, 4)
				if (i + 1 + dy[k] >= 0 && i + 1 + dy[k] < n)
					if (j + dx[k] >= 0 && j + dx[k] < m)
						b[i+1+dy[k]][j+dx[k]] -= tmp;
		}
	}

	REP(i, n) {
		REP(j, m) cout << res[i][j];
		cout << '\n';
	}
    return 0;
}
