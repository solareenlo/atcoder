#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	sort(a, a+n);
	REP(i, n/2) a[i]+=a[n-1-i];
	sort(a, a+n/2);
	cout << a[n/2-1] - a[0] << '\n';
	return 0;
}
