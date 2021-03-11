#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int m = n, r= 0;
	while (m > 0) {
		r = r*2+m%2;
		m /= 2;
	}
	cout << ((n == r) ? "Yes" : "No") << '\n';
	return 0;
}
