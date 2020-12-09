#include <bits/stdc++.h>
using namespace std;

int main() {
	double l, x, y, s, d; cin >> l >> x >> y >> s >> d;
	double res;
	if (s <= d) {
		res = (d - s) / (x + y);
		double res2 = (l - (d - s)) / (y - x);
		if (res2 > 0) res = min(res, res2);
	}
	else {
		res = (l - (s - d)) / (x + y);
		double res2 = (s - d) / (y - x);
		if (res2 > 0) res = min(res, res2);
	}
	printf("%.10f\n", res);
	return 0;
}
