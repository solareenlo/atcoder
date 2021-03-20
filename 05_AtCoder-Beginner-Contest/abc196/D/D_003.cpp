#include <bits/stdc++.h>
using namespace std;

int N, M, RES;
bool MAP[16][16];

void dfs(int y, int x, int a, int b)
{
	if (x==M) y++, x=0;
	if (y==N) return (void)RES++;
	if (MAP[y][x]) dfs(y, x+1, a, b);
	else {
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
}

int main() {
	int a, b; cin >> N >> M >> a >> b;
	dfs(0, 0, a, b);
	cout << RES << '\n';
	return 0;
}
