#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ld = long double;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	ld n, k;
	cin >> n >> k;

	ld k0 = 0;
	ld k1 = (k - 1) * 1 * (n - k) * 6;
	ld k2 = 1 * 1 * (n - 1) * 3;
	ld k3 = 1;

	long double ans = (k0 + k1 + k2 + k3) / pow(n, 3);
	printf("%.10Lf\n", ans);
    return 0;
}
