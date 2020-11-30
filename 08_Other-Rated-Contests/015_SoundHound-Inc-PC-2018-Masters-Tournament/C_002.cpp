#include <bits/stdc++.h>
using namespace std;
int main() {
	double n, m, d; cin >> n >> m >> d;
	double res = 0;
	if (d) res = (m - 1) * 2 * (n - d) / (n * n);
	else res = (m - 1) / n;
	printf("%.10f\n", res);
	return 0;
}
