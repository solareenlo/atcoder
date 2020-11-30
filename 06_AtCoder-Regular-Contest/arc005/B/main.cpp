#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int x, y; cin >> x >> y;
	x--; y--;
	string w; cin >> w;
	vector<string> c(9);
	REP(i, 9) cin >> c[i];

	int n = w.size();
	int dx, dy;
	dx = dy = 0;
	if (w[0] == 'R') dx = 1;
	if (w[0] == 'L') dx = -1;
	if (w[n - 1] == 'U') dy = -1;
	if (w[n - 1] == 'D') dy = 1;

	REP(i, 4) {
		cout << c[y][x];
		int next_x = x + dx;
		int next_y = y + dy;
		if (next_x < 0 || next_x >= 9) dx *= -1;
		if (next_y < 0 || next_y >= 9) dy *= -1;
		x += dx;
		y += dy;
	}
	cout << '\n';
    return 0;
}
