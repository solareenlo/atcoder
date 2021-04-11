#include <bits/stdc++.h>
using namespace std;

int main() {
	double r, x, y; cin >> r >> x >> y;
	double d = sqrt(x*x+y*y);
	cout << (d<r?2:ceil(d/r)) << '\n';
    return 0;
}
