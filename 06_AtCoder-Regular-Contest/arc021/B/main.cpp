#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int b[n];
	int x = 0;
	REP(i, n) {
		cin >> b[i];
		x ^= b[i];
	}
	if (x != 0) {
		cout << -1 << '\n';
		return 0;
	}
	int res = 0;
	REP(i, n) {
		cout << res << '\n';
		res ^= b[i];
	}
    return 0;
}
