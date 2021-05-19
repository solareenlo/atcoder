#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int64_t res, cost, best, now;
int main() {
	int n; cin >> n;
	int64_t a[n], b[n];
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	res = -1e9;
	best = b[0];
	REP(i, n+1) {
		res = max(res, cost+best*(n-i));
		if (i==n)
			break ;
		if (a[now]+cost<0)
			cost += best;
		else
			cost += a[now++];
		best = max(best, b[now]);
	}
	cout << res << '\n';
	return 0;
}
