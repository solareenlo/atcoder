#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (i%2) { if (islower(s[i])) ok = false; }
		else { if (isupper(s[i])) ok = false; }
	}
	cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}
