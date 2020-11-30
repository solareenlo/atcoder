#include <bits/stdc++.h>
using namespace std;

string query(int n) {
	cout << n << '\n' << flush;
	string s; cin >> s;
	if (s == "Vacant") exit(0);
	return s;
}

int main() {
	int n; cin >> n;
	int l = 0;
	int r = n - 1;
	string L = query(l);
	string R = query(r);

	while (true) {
		int m = (l + r) / 2;
		R = query(m);
		if (m % 2) {
			if (L == R) r = m;
			else l = m;
		} else {
			if (L == R) l = m;
			else r = m;
		}
	}
	return 0;
}
