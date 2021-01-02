#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int x[n], y[n];
	REP(i, n) cin >> x[i] >> y[i];
	int cnt = 0;
	REP(i, n) for (int j = i+1; j < n; j++) {
		if (abs(y[i]-y[j]) <= abs(x[i]-x[j]))
			cnt++;
	}
	cout << cnt << '\n';
    return 0;
}
