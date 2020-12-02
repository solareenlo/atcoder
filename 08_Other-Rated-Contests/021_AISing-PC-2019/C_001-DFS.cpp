#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
int h, w;
string s[404];

bool seen[404][404];
vector<ll> c;
void dfs(int i, int j, char ng = '_') {
	if (i < 0 || h <= i || j < 0 || w <= j) return ;
	if (s[i][j] == ng) return ;
	if (seen[i][j]) return ;
	seen[i][j] = true;
	if (s[i][j] == '.') c[0]++;
	else c[1]++;
	REP(k, 4) dfs(i + dy[k], j + dx[k], s[i][j]);
}

int main() {
	cin >> h >> w;
	REP(i, h) cin >> s[i];
	ll res = 0;
	REP(i, h) REP(j, w) {
		c = vector<ll>(2);
		dfs(i, j);
		res += c[0] * c[1];
	}
	cout << res << '\n';
}
