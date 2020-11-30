#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> x(n);
	REP(i, n) {
		int t; cin >> t;
		x[i] = abs(t);
	}
	ll m = accumulate(x.begin(), x.end(), 0LL);
	cout << m << '\n';
	ll y = 0;
	REP(i, n) y += pow(x[i], 2);
	printf("%.10f\n", sqrt(y));
	ll maxi = 0;
	REP(i, n)  maxi = max(maxi, x[i]);
	cout << maxi << '\n';
	return 0;
}
