#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<string> field(10);

bool seen[12][12];

void dfs(int h, int w) {
    seen[h][w] = true;
	REP(dir, 4) {
		int nh = h + dx[dir];
		int nw = w + dy[dir];
		if (nh < 0 || nh >= 10 || nw < 0 || nw >= 10) continue;
		if (field[nh][nw] == 'x') continue;
		if (seen[nh][nw]) continue;
		dfs(nh, nw);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	REP(i, 10) cin >> field[i];

	int sum = 0;
	REP(i, 10) REP(j, 10)
		if (field[i][j] == 'o')
			sum++;

	bool ok = false;
	bool change = false;
	REP(i, 10) REP(j, 10) {
		if (field[i][j] == 'x') {
			field[i][j] = 'o';
			change = true;
		}
		memset(seen, 0, sizeof(seen));
		dfs(i, j);
		int cnt = 0;
		REP(h, 10) REP(w, 10) {
			if (field[h][w] == 'o' && seen[h][w])
				cnt++;
		}
		if (cnt == sum + 1)
			ok = true;
		if (change) {
			field[i][j] = 'x';
			change = false;
		}
	}

	if (ok) cout << "YES" << '\n';
	else cout << "NO" << '\n';
    return 0;
}
