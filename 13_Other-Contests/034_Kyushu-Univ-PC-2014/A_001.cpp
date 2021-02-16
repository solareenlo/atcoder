#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int res[10] = {};
	REP(i, c) {
		int p[a];
		REP(j, a) cin >> p[j];
		sort(p, p+a);
		res[i] = p[a-b];
	}
	sort(res, res+c);
	cout << res[c-d] << '\n';
	return 0;
}
