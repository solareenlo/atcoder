#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

const int dx[6]={-1,-1,0,0,1,1};
const int dy[2][6]={{-1,0,-1,1,-1,0}, {0,1,-1,1,0,1}};

int main() {
	int R, C; cin >> R >> C;
	string a[R];
	int d[R][C];
	int sx, sy, tx, ty;
	REP(i, R) REP(j, C) {
		cin >> a[i][j];
		d[i][j] = (int)2e9;
		if (a[i][j]=='s') sx=i, sy=j;
		if (a[i][j]=='t') tx=i, ty=j;
	}
	queue<pair<int, int> > q;
	q.push({sx, sy});
	d[sx][sy]=0;
	while (!q.empty()) {
		auto [x, y] = q.front(); q.pop();
		if (x==tx && y==ty) continue ;
		REP(i, 6) {
			int nx=x+dx[i];
			int ny=y+dy[x%2][i];
			if (0<=nx && nx<R && 0<=ny && ny<C && d[nx][ny]>d[x][y]+a[nx][ny]-'0') {
				q.push({nx, ny});
				d[nx][ny]=d[x][y]+a[nx][ny]-'0';
			}
		}
	}
	cout << d[tx][ty] << '\n';
	return 0;
}
