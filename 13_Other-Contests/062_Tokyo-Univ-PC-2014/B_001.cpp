#include <bits/stdc++.h>
using namespace std;

int main() {
	double x, y; cin >> x >> y;
	cout << floor(x) << " " << floor(y+1) << " "
		<< floor(x)+round(1000*(x-floor(x))) << " "
		<< floor(y+1)+round(1000*(y-floor(y+1))) << '\n';
	cout << floor(x-1) << " " << floor(y) << " "
		<< floor(x-1)+round(1000*(x-floor(x-1))) << " "
		<< floor(y)+round(1000*(y-floor(y))) << " " << '\n';
	return 0;
}
