#include <iostream>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int d[30][30], res = 1;
		REP(i, n) REP(j, n) {
			cin >> d[i][j];
			if (d[i][j] == -1)
				d[i][j] = 1<<29;
		}
		REP(i, n) if (d[i][i] != 0)
			res = 0;
		REP(i, n) REP(j, n) REP(k, n)
			if (d[i][j] + d[j][k] < d[i][k])
				res = 0;
		cout << (res?"YES":"NO") << '\n';
	}
	return 0;
}
