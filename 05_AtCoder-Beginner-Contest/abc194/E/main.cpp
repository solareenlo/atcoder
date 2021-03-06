#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> pos(n, -1);
	int res = n;
	REP(i, n) {
		int a; cin >> a;
		if (i > m + pos[a])
			res = min(res, a);
		pos[a] = i;
	}
	REP(i, n)
		if (n > m + pos[i])
			res = min(res, i);
	cout << res << '\n';
	return 0;
}
