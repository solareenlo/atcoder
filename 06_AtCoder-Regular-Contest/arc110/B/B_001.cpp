#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string t; cin >> t;
	string s = "";
	while ((int)s.size() < 2 * n)
		s += "110";
	long long res = 0;
	for (int i = 0; i < 3; i++)
		if (s.substr(i, t.size()) == t)
			res += (3e10 - n - i + 1 + 2) / 3;
	cout << res << '\n';
    return 0;
}
