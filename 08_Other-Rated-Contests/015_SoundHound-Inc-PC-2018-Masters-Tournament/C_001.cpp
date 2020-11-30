#include <bits/stdc++.h>
using namespace std;
int main() {
	double n, m, d; cin >> n >> m >> d;
	double res = (n - d) * (m - 1) / (n * n);
	if (d) res *= 2;
	printf("%.10f\n", res);
	return 0;
}
