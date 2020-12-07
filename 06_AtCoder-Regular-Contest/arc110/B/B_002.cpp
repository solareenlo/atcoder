#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string t; cin >> t;
	string s = "110";
	long long res = 0;
	REP(i, 3) {
		bool ok = true;
		REP(j, n) ok = ok && s[(i+j)%3] == t[j];
		if (ok) res += 1e10 - (n+i+2)/3 + 1;
	}
	cout << res << '\n';
	return 0;
}
