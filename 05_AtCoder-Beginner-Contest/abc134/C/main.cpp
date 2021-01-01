#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	REP(i, n) cin >> a[i];
	b = a;
	sort(b.begin(), b.end());
	REP(i, n) cout << ((a[i] == b[n-1]) ? b[n-2] : b[n-1]) << '\n';
	return 0;
}
