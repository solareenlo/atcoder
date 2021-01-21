#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[101][101] = {0};
	REP(i, n) REP(j, i+1) cin >> a[i][j];
	for (int i = n-2; i >= 0; i--) REP(j, i+1)
		a[i][j] = max(a[i][j]+a[i+1][j], a[i][j]+a[i+1][j+1]);
	cout << a[0][0] << '\n';
	return 0;
}
