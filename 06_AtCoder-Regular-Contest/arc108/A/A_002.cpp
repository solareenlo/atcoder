#include <bits/stdc++.h>
using namespace std;
int main() {
	long long s, p; cin >> s >> p;
	for (int i = 1; i <= p/i; i++) {
		if (!(p % i) && i + p/i == s) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	return 0;
}
