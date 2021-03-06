#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n+1, 0);
	REP(i, n) cin >> a[i];
	vector<int> b(n+1, 0), res(n+1, 0);
	int cnt = 0;
	for (int i = n; i > 0; i--) {
		int sum = 0;
		for (int j = i+i; j <= n; j += i)
			sum += b[j];
		if (sum%2 != a[i]) {
			b[i] = 1;
			res[++cnt] = i;
		}
	}
	cout << cnt << '\n';
	REP(i, cnt) cout << res[i] << '\n';
	return 0;
}
