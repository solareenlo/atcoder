#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int a, b, c, d, e, f;
int resWS, resS;
double maxi;

int main() {
	cin >> a >> b >> c >> d >> e >> f;
	resWS = 100 * a;
	REP(i, f/(100*a)+1) REP(j, f/(100*b)+1) {
		int w = 100 * a * i + 100 * b * j;
		if (w == 0) continue ;
		REP(n, f/c+1) REP(m, f/d+1) {
			int s = c * n + d * m;
			if (w + s > f) continue ;
			if (100 * s > e * w) continue ;
			if (s * resWS <= resS * (w + s)) continue ;
			resWS = w + s;
			resS = s;
		}
	}
	cout << resWS << " " << resS << '\n';
    return 0;
}
