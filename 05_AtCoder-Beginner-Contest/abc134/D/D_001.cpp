#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n + 1, 0);
	REP(i, n) cin >> a[i + 1];

	vector<int> b(n + 1, 0), res(n + 1, 0);
	int m = 0;
	for (int i = n; i > 0; i--) {
		int sum = 0;
		for (int j = i * 2; j <= n; j += i)
			sum += b[j];
		if (sum % 2 != a[i]) {
			b[i] = 1;
			res[++m] = i;
		}
	}
	cout << m << '\n';
	for (int i = 1; i <= m; i++)
		cout << res[i] << " ";
    return 0;
}
