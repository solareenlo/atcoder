#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, q; cin >> n >> q;
	int x[n], r[n], h[n];
	REP(i, n) cin >> x[i] >> r[i] >> h[i];
	REP(_, q) {
		int a, b; cin >> a >> b;
		double res = 0.0;
		REP(i, n) {
			double bottom = max(x[i], a);
			double top = min(x[i]+h[i], b);
			if (bottom < top) {
				double R = r[i]*(x[i]+h[i]-bottom)/h[i];
				res += M_PI*R*R*(x[i]+h[i]-bottom)/3.0;
				R = r[i]*(x[i]+h[i]-top)/h[i];
				res -= M_PI*R*R*(x[i]+h[i]-top)/3.0;
			}
		}
		printf("%.10f\n", res);
	}
	return 0;
}
