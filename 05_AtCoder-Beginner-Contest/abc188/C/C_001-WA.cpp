#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	n = 1 << n;
	int a[n], res[n];
	REP(i, n) cin >> a[i];
	memmove(res, a, sizeof(a));
	while (n > 2) {
		int b[n/2];
		REP(i, n/2)
			b[i] = max(a[i*2], a[i*2+1]);
		n /= 2;
		memmove(a, b, sizeof(b));
	}
	cout << distance(res, find(res, res+n, min(a[0], a[1]))) + 1 << '\n';
    return 0;
}
