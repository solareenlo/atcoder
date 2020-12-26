#include <bits/stdc++.h>
#include <boost/geometry.hpp>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace boost::geometry;
typedef model::d2::point_xy<double> point;
typedef model::linestring<point> line;

int main() {
	double x, y; cin >> x >> y;
	point p1(x, y);
	cin >> x >> y;
	point p2(x, y);
	line l = {p1, p2};

	int n; cin >> n;
	point v[n+1];
	REP(i, n) {
		cin >> x >> y;
		v[i] = {x, y};
	}
	v[n] = v[0];

	int cnt = 0;
	REP(i, n) {
		line ll = {v[i], v[i+1]};
		if (intersects(l, ll)) cnt++;
	}
	cout << cnt / 2 + 1 << '\n';
    return 0;
}
