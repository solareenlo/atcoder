#include <bits/stdc++.h>
using namespace std;

double f(double x, double p) { return x + pow(2, -x/1.5) * p; }

int main() {
	double p; cin >> p;
	double l = 0.0, r = p;
	while (r - l > 1e-8) {
		double c1 = (l * 2 + r) / 3;
		double c2 = (l + r * 2) / 3;
		if (f(c1, p) > f(c2, p)) l = c1;
		else r = c2;
	}
	printf("%.10f\n", f(r, p));
    return 0;
}
