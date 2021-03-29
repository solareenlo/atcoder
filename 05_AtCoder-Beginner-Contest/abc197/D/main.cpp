#include <bits/stdc++.h>
using namespace std;
typedef complex<double> P;

P rotate(P vec, double ang) {
    double x = vec.real(), y = vec.imag();
    return P(x * cos(ang) - y * sin(ang), x * sin(ang) + y * cos(ang));
}

int main() {
	int n; cin >> n;
    int x, y;
	P p0, pN2;
    cin >> x >> y; p0 = P(x, y);
    cin >> x >> y; pN2 = P(x, y);

    P center = (p0 + pN2) / 2.0;
    P res = rotate(p0 - center, 2 * M_PI / n) + center;

    printf("%0.9f %0.9f\n", res.real(), res.imag());
	return 0;
}
