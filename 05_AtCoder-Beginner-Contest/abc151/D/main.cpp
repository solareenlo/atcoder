#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

int seen[30][30];
void dfs(int h, int w, int k) {
	if (h >= H || h < 0 || w >= W || w < 0)
		return ;
	if (field[h][w] == '#')
		return ;
	if (seen[h][w] <= k)
		return ;
	else
		seen[h][w] = k;
	REP(i, 4)
		dfs(h + dx[i], w + dy[i], k + 1);
}

int main() {
	cin >> H >> W;
	field.resize(H);
	REP(i, H) cin >> field[i];

	int maxi = 0;
	REP(i, H) REP(j, W) {
		if (field[i][j] == '.') {
			memset(seen, 0x40, sizeof(seen));
			dfs(i, j, 0);
		REP(h, H) REP(w, W) {
				if (seen[h][w] != seen[29][29])
					maxi = max(maxi, seen[h][w]);
			}
		}
	}
	cout << maxi << '\n';
    return 0;
}
