#include <bits/stdc++.h>
using namespace std;

int H, W;
bool MAP[16][16];

int dfs(int y, int x, int a, int b) {
	if (a<0 || b<0) return 0;
	if (x==W) x=0, y++;
	if (y==H) return 1;
	if (MAP[y][x]) return dfs(y, x+1, a, b);
	int res = 0;
	MAP[y][x] = true;
	res += dfs(y, x+1, a, b-1);
	if (x+1<W && !MAP[y][x+1]) {
		MAP[y][x+1] = true;
		res += dfs(y, x+1, a-1, b);
		MAP[y][x+1] = false;
	}
	if (y+1<H && !MAP[y+1][x]) {
		MAP[y+1][x] = true;
		res += dfs(y, x+1, a-1, b);
		MAP[y+1][x] = false;
	}
	MAP[y][x] = false;
	return res;
}

int main() {
	int a, b; cin >> H >> W >> a >> b;
	cout << dfs(0, 0, a, b) << '\n';
	return 0;
}
