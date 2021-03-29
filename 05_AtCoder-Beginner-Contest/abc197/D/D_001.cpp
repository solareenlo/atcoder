#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	complex<double> a, b;
	double x, y;
	cin >> x >> y; a = {x, y};
	cin >> x >> y; b = {x, y};
	auto center = (a+b)/2.0;
	auto res = center+(a-center)*polar(1.0, M_PI*2.0/n);
    cout << setprecision(9) << res.real() << " " << res.imag() << '\n';
    return 0;
}
