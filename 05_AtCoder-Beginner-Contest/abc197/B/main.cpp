#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w, x, y; cin >> h >> w >> x >> y;
	x--, y--;
	string s[h];
	for (auto &a : s) cin >> a;
	int res = 0;
	for (int i=x; i<h && s[i][y]=='.'; i++) res++;
	for (int i=x; i>=0 && s[i][y]=='.'; i--) res++;
	for (int i=y; i<w && s[x][i]=='.'; i++) res++;
	for (int i=y; i>=0 && s[x][i]=='.'; i--) res++;
	cout << res-3 << '\n';
	return 0;
}
