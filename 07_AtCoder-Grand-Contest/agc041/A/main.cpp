#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	ll n, a, b; cin >> n >> a >> b;
	ll res = 0;
	if (b - a == 1) res = min(n - a, b - 1);
	else if ((b - a) % 2) res = min(n - a, b - 1) - (b - a - 1)/2;
	else res = (b - a) / 2;
	cout << res << '\n';
	return 0;
}
