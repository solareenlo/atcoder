#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool seen[505][505];
void dfs(int y, int x) {
	seen[y][x] = true;
	REP(i, 4) {
		int next_y = y + dy[i];
		int next_x = x + dx[i];
		if (next_x < 0 || next_x >= W || next_y < 0 || next_y >= H) continue ;
		if (field[next_y][next_x] == '#') continue ;
		if (seen[next_y][next_x]) continue ;
		dfs(next_y, next_x);
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> H >> W;
	field.resize(H);
	REP(i, H) cin >> field[i];

	int start_y, start_x, goal_y, goal_x;
	REP(i, H) REP(j, W) {
			if (field[i][j] == 's') {
				start_y = i;
				start_x = j;
			}
			if (field[i][j] == 'g') {
				goal_y = i;
				goal_x = j;
			}
	}

	memset(seen, 0, sizeof(seen));
	dfs(start_y, start_x);

	if (seen[goal_y][goal_x]) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}
