#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> pos(n, -1);
	int res = n;
	REP(i, n) {
		int a; cin >> a;
		if (i - pos[a] > m)
			res = min(res, a);
		pos[a] = i;
	}
	REP(i, n)
		if (n - pos[i] > m) {
			res = min(res, i);
			break ;
		}
	cout << res << '\n';
	return 0;
}
