#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	double res = 0.0;
	for (int i=1; i<n; i++)
		res += 1.0/i;
	printf("%.10f\n", res*n);
	return 0;
}
