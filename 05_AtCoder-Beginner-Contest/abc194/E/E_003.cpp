#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n];
	REP(i, n) cin >> a[i];
	vector<int> c(n+1, 0);
	REP(i, m) c[a[i]]++;
	int now = 0;
	while (c[now]) now++;
	int res = now;
	for (int i = m; i < n; i++) {
		c[a[i]]++;
		int b = a[i-m];
		c[b]--;
		if (c[b] == 0 && b < now) now = b;
		res = min(res, now);
	}
	cout << res << '\n';
	return 0;
}
