#include <bits/stdc++.h>
using namespace std;

int main() {
	int sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;
	double res = (double)sx + ((double)sy * (double)(gx - sx)) / (double)(sy + gy);
	printf("%.10f\n", res);
    return 0;
}
