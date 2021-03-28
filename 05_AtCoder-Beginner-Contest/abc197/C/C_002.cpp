#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	int res = 2e9;
	REP(bit, 1<<(n-1)) {
		int cur=a[0], t=0;
		REP(i, n) {
			if (bit & 1<<(i-1)) t^=cur, cur=0;
			cur|=a[i];
		}
		res=min(res, t^=cur);
	}
	cout << res << '\n';
	return 0;
}
