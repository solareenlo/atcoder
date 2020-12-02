#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,1,0,-1};
string s[404];
int h, w;
bool seen[404][404];
ll cnt[2];

void dfs(int x, int y) {
	seen[x][y] = true;
	if (s[x][y] == '#') cnt[0]++;
	else cnt[1]++;
	REP(i, 4) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || h <= nx || ny < 0 || w <= ny) continue ;
		if (seen[nx][ny]) continue ;
		if (s[nx][ny] == s[x][y]) continue ;
		dfs(nx, ny);
	}
}

int main() {
	cin >> h >> w;
	REP(i, h) cin >> s[i];
	ll res = 0;
	REP(i, h) REP(j ,w) {
		cnt[0] = cnt[1] = 0;
		dfs(i, j);
		res += cnt[0] * cnt[1];
	}
	cout << res << '\n';
	return 0;
}
