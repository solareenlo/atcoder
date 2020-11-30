#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> h(n);
	REP(i, n) cin >> h[i];

	vector<int> l(n, 0);
	REP(i, n - 1)
		if (h[i] < h[i + 1])
			l[i + 1]++;

	vector<int> r(n, 0);
	for (int i = n - 1; i > 0; i--)
		if (h[i - 1] > h[i])
			r[i - 1]++;

	vector<int> c(n, 0);
	REP(i, n)
		if (l[i] + r[i] > 0)
			c[i]++;

	int res = 0;
	int sum = 0;
	c[0] = c[n - 1] = 0;
	REP(i, n) {
		if (c[i] > 0) {
			sum++;
			res = max(res, sum);
		} else
			sum = 0;
	}
	if (n == 1) cout << 1 << '\n';
	else cout << res + 2 << '\n';
    return 0;
}
