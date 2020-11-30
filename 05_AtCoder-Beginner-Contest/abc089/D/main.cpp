#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int h, w, d, a, q, l, r;
int main() {
	cin >> h >> w >> d;
	vector<int> x(h * w + 1, 0), y(h * w + 1, 0);
	REP(i, h) REP(j, w) {
		cin >> a;
		x[a] = j;
		y[a] = i;
	}

	vector<int> s(h * w + 1, 0);
	REP(i, h * w - d + 1)
		s[i+d] = s[i] + abs(x[i+d] - x[i]) + abs(y[i+d] - y[i]);

	cin >> q;
	while (q--) {
		cin >> l >> r;
		cout << s[r] - s[l] << '\n';
	}
	return 0;
}
