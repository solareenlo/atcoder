#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
int main() {
	int a[4][4];
	REP(i, 4) REP(j, 4) cin >> a[i][j];
	bool ok = false;
	REP(i, 4) REP(j, 4) REP(k, 4)
		if (i+dx[k]>=0 && i+dx[k]<4)
			if (j+dy[k]>=0 && j+dy[k]<4)
				if (a[i][j] == a[i+dx[k]][j+dy[k]])
					ok = true;
	cout << (ok ? "CONTINUE" : "GAMEOVER") << '\n';
	return 0;
}
