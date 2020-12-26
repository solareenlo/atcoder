#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int ax, ay, bx, by; cin >> ax >> ay >> bx >> by;
	int n; cin >> n;
	int x[n], y[n];
	REP(i, n) cin >> x[i] >> y[i];
	int cnt = 0;
	REP(i, n) {
		int cx = x[i];
		int cy = y[i];
		int dx = x[(i+1)%n];
		int dy = y[(i+1)%n];
		int64_t v1 = (ay-by)*cx - (ax-bx)*cy + ax*by - bx*ay;
		int64_t v2 = (ay-by)*dx - (ax-bx)*dy + ax*by - bx*ay;
		int64_t u1 = (cy-dy)*ax - (cx-dx)*ay + cx*dy - dx*cy;
		int64_t u2 = (cy-dy)*bx - (cx-dx)*by + cx*dy - dx*cy;
		if (v1*v2<0 && u1*u2<0) cnt++;
	}
	cout << cnt/2+1 << '\n';
	return 0;
}
