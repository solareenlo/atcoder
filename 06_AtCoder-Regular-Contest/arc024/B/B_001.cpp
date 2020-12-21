#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> c(2*n, 0);
	REP(i, n) {
		cin >> c[i];
		c[i+n] = c[i];
	}
	int r = 0, now = c[0], res = -1;
	REP(i, 2*n) {
		if (now == c[i]) r++;
		else {
			res = max(res, ((r-1)/2)+1);
			now = c[i];
			r = 1;
		}
	}
	cout << res << '\n';
    return 0;
}
