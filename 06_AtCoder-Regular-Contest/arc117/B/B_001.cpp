#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i < (n); i++)
using namespace std;
int64_t a[100001];
int main() {
	int n; cin >> n;
	REP(i, n+1) cin >> a[i];
	sort(a+1, a+n+1);
	int64_t res = 1;
	REP(i, n+1) (res *= (a[i]-a[i-1]+1)) %= 1000000007;
	cout << res << '\n';
    return 0;
}
