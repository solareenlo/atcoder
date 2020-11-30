#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	double d; cin >> d;

	int cnt = 0;
	REP(i, n) {
		double x, y; cin >> x >> y;
		double dist = hypot(x, y);
		if (dist <= d)
			cnt++;
	}

	cout << cnt << '\n';
	return 0;
}
