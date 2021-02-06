#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<double, double>;
pair<P, int> p[300];
int main() {
	REP(i, 300) {
		double x, y; cin >> x >> y;
		p[i] = make_pair(make_pair(x*cos(1)-y*sin(1), x*sin(1)+y*cos(1)), i+1);
	}
	sort(p, p+300);
	cout << 100 << '\n';
	REP(i, 100)
		printf("%d %d %d\n", p[i*3].second, p[i*3+1].second, p[i*3+2].second);
	return 0;
}
