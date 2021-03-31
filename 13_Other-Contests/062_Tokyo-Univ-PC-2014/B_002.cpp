#include <bits/stdc++.h>
using namespace std;

int main() {
	double x, y; cin >> x >> y;
	printf("%.0f %.0f %.0f %.0f\n", floor(x), floor(y+1), floor(x)+round(1000*(x-floor(x))), floor(y+1)+round(1000*(y-floor(y+1))));
	printf("%.0f %.0f %.0f %.0f\n", floor(x-1), floor(y), floor(x-1)+round(1000*(x-floor(x-1))), floor(y)+round(1000*(y-floor(y))));
	return 0;
}
