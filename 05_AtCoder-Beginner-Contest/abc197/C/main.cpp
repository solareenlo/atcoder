#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int n, a[21], res=2e9;
int main() {
	cin >> n;
	REP(i, n) cin >> a[i];
	REP(bit, 1<<(n-1)) {
		int xored=0, ored=0;
		REP(i, n+1) {
			if (i<n) ored|=a[i];
			if (i==n || bit>>i&1) xored^=ored, ored=0;
		}
		res = min(res, xored);
	}
	cout << res << '\n';
	return 0;
}
