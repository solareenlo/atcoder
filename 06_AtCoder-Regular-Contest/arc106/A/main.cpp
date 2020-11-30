#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	REP(i, 39) REP(j, 27) {
		ll three = 1;
		ll five = 1;
		int cnt = i;
		while (cnt--)
			three *= 3;
		cnt = j;
		while (cnt--)
			five *= 5;
		if (three + five == n) {
			cout << i << " " << j << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	return 0;
}
