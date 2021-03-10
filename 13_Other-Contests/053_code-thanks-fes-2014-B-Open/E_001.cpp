#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int r, c, g[50][50], visited[50][50];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void dfs(int x, int y) {
	if (x<1 || y<1 || x>c+1 || y>r+1 || g[y][x] == 0 || visited[y][x])
		return ;
	visited[y][x] = 1;
	REP(i, 4) dfs(x+dx[i], y+dy[i]);
}

int main() {
	int rs, cs, rg, cg, n; cin >> r>> c >> rs >> cs >> rg >> cg >> n;
	REP(i, n) {
		int r, c, h, w; cin >> r >> c >> h >> w;
		for (int j=r; j<r+h; j++)
			for (int k=c; k<c+w; k++)
				g[j][k] = 1;
	}
	dfs(rs, cs);
	cout << ((visited[rg][cg]) ? "YES" : "NO") << '\n';
	return 0;
}
