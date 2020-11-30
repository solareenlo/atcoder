#include <bits/stdc++.h>
using namespace std;

int main() {
	long long s, p; cin >> s >> p;
	for (int i = 1; i <= 1000000; i++) {
		if (i*(s-i) == p) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	return 0;
}
