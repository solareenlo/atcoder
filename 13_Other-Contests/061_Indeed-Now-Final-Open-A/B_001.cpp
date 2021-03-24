#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
using P = pair<int, int>;

int dy[6] = {0,0,-1,-1,1,1};
int dx0[6] = {1,-1,0,-1,0,-1};
int dx1[6] = {1,-1,0,1,0,1};

int main() {
	int R, C; cin >> R >> C;
	string a[R];
	REP(i, R) cin >> a[i];
	int s, t;
	REP(i, R) REP(j, C) {
		if (a[i][j] == 's') s = i*C+j;
		if (a[i][j] == 't') t = i*C+j;
	}
	vector<int> d(R*C, (int)2e9);
	priority_queue<P, vector<P>, greater<P> > q;
	q.push({0, s});
	d[s] = 0;
	while (!q.empty()) {
		auto [c, v] = q.top(); q.pop();
		int y = v/C;
		int x = v%C;
		if (d[v]<c) continue ;
		int *dx = dx0;
		if (y%2) dx = dx1;
		REP(i, 6) {
			int ny = y+dy[i];
			int nx = x+dx[i];
			if (ny<0 || ny>=R || nx<0 || nx>=C) continue ;
			int cost = 0;
			if (!(a[ny][nx]=='s' || a[ny][nx]=='t'))
				cost = a[ny][nx]-'0';
			int e = ny*C+nx;
			if (d[e]>d[v]+cost) {
				d[e] = d[v]+cost;
				q.push({d[e], e});
			}
		}
	}
	cout << d[t] << '\n';
	return 0;
}
