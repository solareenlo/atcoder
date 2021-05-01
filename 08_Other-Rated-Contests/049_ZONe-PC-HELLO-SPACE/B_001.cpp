#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	double D, H; cin >> D >> H;
	double maxi = 0;
	while (n--) {
		double d, h; cin >> d >> h;
		maxi = max(maxi, h-d*(H-h)/(D-d));
	}
	cout << maxi << '\n';
	return 0;
}
