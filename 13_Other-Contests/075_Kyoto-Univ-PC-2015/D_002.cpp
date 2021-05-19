#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int64_t res, sum, x, y;
int main() {
	int n; cin >> n;
	int64_t a[n], b[n];
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	y = n;
	REP(i, n) {
		res = max(res, sum+y*max(x, b[i]));
		sum += a[i];
		y--;
		x = max(x, b[i]);
		while (sum<0 && y>0) {
			sum += x;
			y--;
		}
		if (y<0 || sum<0)
			break ;
	}
	cout << max(res, sum) << '\n';
	return 0;
}
