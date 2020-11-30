#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int h, w, n, m;
bool light[1505][1505];
bool wall[1505][1505];
bool ok[1505][1505];
bool visited[1505][1505];
bool memo[1505][1505];

bool f(int v, int i, int j) {
	if (i < 0 || j < 0 || i >= h || j >= w) return false;
	if (wall[i][j]) return false;
	if (light[i][j]) return true;
	if (visited[i][j]) return memo[i][j];
	visited[i][j] = true;
	return memo[i][j] = f(v, i+di[v], j+dj[v]);
}

int main() {
	cin >> h >> w >> n >> m;
	REP(i, n) {
		int r, c; cin >> r >> c;
		r--, c--;
		light[r][c] = true;
	}
	REP(i, m) {
		int r, c; cin >> r >> c;
		r--, c--;
		wall[r][c] = true;
	}
	REP(v ,4) {
		REP(i, h) REP(j, w) visited[i][j] = false;
		REP(i, h) REP(j, w) if (f(v, i, j)) ok[i][j] = true;
	}
	int res = 0;
	REP(i, h) REP(j, w) if (ok[i][j]) res++;
	cout << res << '\n';
    return 0;
}
