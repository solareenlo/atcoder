#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1];
	REP(i, n) cin >> a[i];
	int cnt = 0;
	for (int i = n; i > 0; i--) {
		for (int j = i+i; j <= n; j += i)
			a[i] ^= a[j];
		if (a[i]) cnt++;
	}
	cout << cnt << '\n';
	REP(i, n)
		if (a[i]) cout << i << '\n';
	return 0;
}
