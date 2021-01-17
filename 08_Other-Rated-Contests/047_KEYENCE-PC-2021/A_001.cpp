#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int64_t a[n], b[n];
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	int64_t A = 0, res = 0;
	REP(i, n) {
		A = max(A, a[i]);
		res = max(res, A * b[i]);
		cout << res << '\n';
	}
	return 0;
}
