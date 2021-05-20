#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int h, w; cin >> h >> w;
		if (h > w)
			swap(h, w);
		double l = w, r = h * 2;
		for (int i=0; i<1000; i++) {
			double m = (l+r)/2;
			double a = h-sqrt(m*m-w*w);
			double b = m<=h?w:w-sqrt(m*m-h*h);
			if (a*a+b*b>m*m)
				l = m;
			else
				r = m;
		}
		printf("%.10f\n", min(sqrt(h*h+w*w/4.0), l));
	}
	return 0;
}
