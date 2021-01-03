#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int a[5][5];
int main() {
	REP(i, 4) REP(j, 4) {
		cin >> a[i][j];
		if (a[i][j] == a[i-1][j] || a[i][j] == a[i][j-1]) {
			cout << "CONTINUE" << '\n';
			return 0;
		}
	}
	cout << "GAMEOVER" << '\n';
	return 0;
}
