#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int n, c[200002], cnt, now, res;
int main() {
	cin >> n;
	REP(i, n) cin >> c[i];
	REP(i, n) c[i+n] = c[i];
	res = -1;
	now = c[0];
	REP(i, 2*n) {
		if (now == c[i]) cnt++;
		else {
			res = max(res, ((cnt-1)/2)+1);
			now = c[i];
			cnt = 1;
		}
	}
	cout << res << '\n';
	return 0;
}
