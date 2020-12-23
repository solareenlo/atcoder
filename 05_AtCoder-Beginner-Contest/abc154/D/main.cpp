#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	double s[n+1];
	s[0] = 0;
	REP(i, n) {
		int a; cin >> a;
		s[i+1] = s[i] + (1.0+a)/2;
	}
	double res = 0;
	REP(i, n+1-k)
		res = max(res, s[i+k]-s[i]);
	printf("%.10f\n", res);
	return 0;
}
