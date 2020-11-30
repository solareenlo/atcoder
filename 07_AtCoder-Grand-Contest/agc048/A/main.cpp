#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int res = 0;
		if ("atcoder" >= s) {
			res = s.find_first_not_of('a');
			if (s[res] > 't') res--;
		}
		cout << res << '\n';
	}
	return 0;
}
