#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
string a, b, c, d, k;
int main() {
	cin >> a >> b;
	if (a.size() > 6) {
		REP(i, (int)a.size()) {
			if (a[i] != b[i]) {
				c += a[i];
				d += b[i];
			}
		}
		if (c.size() > 6) {
			cout << "NO" << '\n';
			return 0;
		}
		while (c.size() < 6) {
			c += "A";
			d += "A";
		}
	} else {
		c = a, d = b;
	}
	int n = c.size();
	REP(a1, n) REP(a2, n) REP(a3, n) REP(a4, n) REP(a5, n) REP(a6, n) {
		if (a1 == a2 || a3 == a4 || a5 == a6) continue;
		k = c;
		swap(k[a1], k[a2]);
		swap(k[a3], k[a4]);
		swap(k[a5], k[a6]);
		if (k == d) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	cout << "NO" << '\n';
	return 0;
}
