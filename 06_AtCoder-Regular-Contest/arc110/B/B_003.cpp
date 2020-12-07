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
		REP(j, n)
			if (t[j] != s[(j+i)%3])
				ok = false;
		if (ok) res += (3e10 - n - i) / 3 + 1;
	}
	cout << res << '\n';
	return 0;
}
