#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string t; cin >> t;
	string s = "";
	while ((int)s.size() < 2 * n)
		s += "110";
	long long res = 0;
	if (s.find(t) != string::npos) {
		if (t == "1") res = 2e10;
		else if (t == "11") res = 1e10;
		else {
			int k = 0;
			for (int i = 0; i < n; i++)
				if (t[i] == '0')
					k++;
			if (t[n-1] == '0') res = 1e10 - k + 1;
			else res = 1e10 - k;
		}
	}
	cout << res << '\n';
	return 0;
}
