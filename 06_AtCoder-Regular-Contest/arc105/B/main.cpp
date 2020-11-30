#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int g; cin >> g;
	for (int i = 0; i < n - 1; i++) {
		int a; cin >> a;
		g = gcd(g, a);
	}
	cout << g << '\n';
	return 0;
}
