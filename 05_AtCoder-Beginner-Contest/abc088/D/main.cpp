#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w; cin >> h >> w;
	int cnt = 0;
	vector<vector<char> > s(h, vector<char>(w));
	REP(i, h) REP(j, w) {
		char c; cin >> c;
		if (c == '.') cnt++;
		s[i][j] = c;
	}

	vector<vector<int> > d(h, vector<int>(w, -1));
	d[0][0] = 0;

	queue<P> que;
	que.push(make_pair(0, 0));

	while (!que.empty()) {
		P pos = que.front();
		int y = pos.first;
		int x = pos.second;
		que.pop();

		REP(i, 4) {
			int next_y = y + dy[i];
			int next_x = x + dx[i];
			if (next_y < 0 || next_y >= h || next_x < 0 || next_x >= w)
				continue ;
			if (s[next_y][next_x] == '#')
				continue ;
			if (d[next_y][next_x] == -1) {
				que.push(make_pair(next_y, next_x));
				d[next_y][next_x] = d[y][x] + 1;
			}
		}
	}

	if (d[h - 1][w - 1] == -1) cout << -1 << '\n';
	else cout << cnt - d[h -1][w - 1] - 1 << '\n';
    return 0;
}
