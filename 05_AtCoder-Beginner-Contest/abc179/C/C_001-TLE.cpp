#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	ll cnt = 0;
	REP(c, n + 1) {
		REP(a, n - c + 1) {
			if ((n - c) % a == 0) {
				ll b = (n - c) / a;
				if (b != 0) {
					// cout << "a:" << a << "b:" << b << "c:" << c << '\n';
					cnt++;
				}
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
