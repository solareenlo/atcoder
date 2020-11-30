#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	vector<int> c(n + 1);
	c[0] = 3;
	long long res = 1;
	REP(i, n) {
		res *= c[a[i]];
		res %= 1000000007;
		c[a[i]]--;
		c[a[i]+1]++;
	}
	cout << res << '\n';
	return 0;
}
