#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int64_t cost, best, res, now;
int main() {
	int n; cin >> n;
	int64_t a[n], b[n];
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	REP(i, n) {
		best = max(best, b[now]);
		res = max(res, cost+best*(n-i));
		if (cost+a[now]<0)
			cost += best;
		else
			cost += a[now++];
	}
	cout << max(res, cost) << '\n';
	return 0;
}
