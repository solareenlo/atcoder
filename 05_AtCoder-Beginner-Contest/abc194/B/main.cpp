#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], b[n];
	REP(i, n) cin >> a[i] >> b[i];
	int res = 1e6+1;
	REP(i, n) REP(j, n)
		res = min(res, (i==j) ? a[i]+b[j] : max(a[i],b[j]));
	cout << res << '\n';
	return 0;
}
