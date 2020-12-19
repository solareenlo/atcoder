#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int r[100002], h[100002], s[100002], g[100002][3];
int main() {
	int n; cin >> n;
	REP(i, n) {
		cin >> r[i] >> h[i]; h[i]--;
		s[r[i]]++;
		g[r[i]][h[i]]++;
	}
	REP(i, 100001) s[i+1] += s[i];
	REP(i, n) {
		int w = s[r[i]-1] + g[r[i]][(h[i]+1)%3];
		int d = g[r[i]][h[i]] - 1;
		int l = n - 1 - w - d;
		cout << w << " " << l << " " << d << '\n';
	}
    return 0;
}
