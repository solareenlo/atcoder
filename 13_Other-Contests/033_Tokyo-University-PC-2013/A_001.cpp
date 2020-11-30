#include <bits/stdc++.h>
using namespace std;

int main() {
	string z = "CEFGHIJKLMNSTUVWXYZ";
	string o = "ADOPQR";
	string t = "B";
	string s; cin >> s;
	bool ok = false;
	if (z.find(s[0]) != string::npos)
		if (z.find(s[1]) != string::npos)
			if (o.find(s[2]) != string::npos)
				if (z.find(s[3]) != string::npos)
					ok = true;
	if (ok) cout << "yes" << '\n';
	else cout << "no" << '\n';
	return 0;
}
