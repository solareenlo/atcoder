#include <bits/stdc++.h>
using namespace std;

int main() {
	int	n; cin >> n;
	double res = 0.0;
	for (int i=1; i<n; i++)
		res += 1.0*n/(n-i);
	printf("%.10f\n", res);
    return 0;
}
