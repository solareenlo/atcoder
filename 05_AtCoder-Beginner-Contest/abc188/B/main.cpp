#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], b[n];
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	int64_t res = 0;
	REP(i, n) res += a[i] * b[i];
	cout << (res ? "No" : "Yes") << '\n';
    return 0;
}
