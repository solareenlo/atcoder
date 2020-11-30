#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	vector<int> l(n, 0), r(n, 0);
	REP(i, n-1) l[i+1] = gcd(l[i], a[i]);
	for (int i = n-1; i > 0; i--) r[i-1] = gcd(r[i], a[i]);
	int res = 1;
	REP(i, n) res = max(res, gcd(l[i], r[i]));
	cout << res << '\n';
    return 0;
}
