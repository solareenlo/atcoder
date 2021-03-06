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
		int64_t area1 = ax*by + bx*cy + cx*ay - ay*bx - by*cx - cy*ax;
		int64_t area2 = ax*by + bx*dy + dx*ay - ay*bx - by*dx - dy*ax;
		int64_t area3 = cx*dy + dx*ay + ax*cy - cy*dx - dy*ax - ay*cx;
		int64_t area4 = cx*dy + dx*by + bx*cy - cy*dx - dy*bx - by*cx;
		if (area1*area2 < 0 && area3*area4 < 0) cnt++;
	}
	cout << cnt/2+1 << '\n';
	return 0;
}
