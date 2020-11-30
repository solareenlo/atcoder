#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	double X, Y; cin >> X >> Y;
	int n; cin >> n;
	vector<double> x(n + 1), y(n + 1);
	REP(i, n) cin >> x[i] >> y[i];
	x[n] = x[0];
	y[n] = y[0];

	double dist = 1e10;
	REP(i, n) {
		double a = y[i+1] - y[i];
		double b = x[i] - x[i+1];
		double c = x[i] * (y[i] - y[i+1]) + y[i] * (x[i+1] - x[i]);
		double d = abs(a*X + b*Y + c) / hypot(a, b);
		dist = min(dist, d);
	}

	cout << fixed << setprecision(10) << dist << '\n';
    return 0;
}
