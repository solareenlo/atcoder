#include <bits/stdc++.h>
using namespace std;

int main() {
	double p; cin >> p;
	double a = 1.5 / log(2);
	printf("%.10f\n", (p<a) ? p : -1.5*(log2(a)-log2(p))+a);
	return 0;
}
