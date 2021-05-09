#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		int res = 0;
		for (int i=0; i<(int)s.size(); i++) if ((s.substr(i, 5) == "kyoto") || (s.substr(i, 5) == "tokyo"))
			res++, i += 4;
		cout << res << '\n';
	}
	return 0;
}
