#include <bits/stdc++.h>
using namespace std;

int H, W, RES;
bool MAP[16][16];

void dfs(int y, int x, int a, int b) {
	if (x==W) y++, x=0;
	if (y==H) return (void)RES++;
	if (MAP[y][x]) return dfs(y, x+1, a, b);
	MAP[y][x] = true;
	if (b) dfs(y, x+1, a, b-1);
	if (a && !MAP[y][x+1]) {
		MAP[y][x+1] = true;
		dfs(y, x+1, a-1, b);
		MAP[y][x+1] = false;
	}
	if (a && !MAP[y+1][x]) {
		MAP[y+1][x] = true;
		dfs(y, x+1, a-1, b);
		MAP[y+1][x] = false;
	}
	MAP[y][x] = false;
}

int main() {
	int a, b; cin >> H >> W >> a >> b;
	dfs(0, 0, a, b);
	cout << RES << '\n';
	return 0;
}
