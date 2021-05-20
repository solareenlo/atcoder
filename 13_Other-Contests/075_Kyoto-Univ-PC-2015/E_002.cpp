#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		double h, w; cin >> h >> w;
		if (w<h)
			swap(w, h);
		double res;
		if (w/h < 2/sqrt(3))
			res = 2*sqrt(h*h-sqrt(3)*w*h+w*w);
		else
			res = sqrt(h*h+w*w/4.0);
		printf("%.10f\n", res);
	}
	return 0;
}
