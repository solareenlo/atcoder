#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, t; cin >> n >> m >> t;
	int s = 0, battery = n;
	while (m--) {
		int a, b; cin >> a >> b;
		battery -= a - s;
		if (battery <= 0) {
			cout << "No" << '\n';
			return 0;
		}
		battery = min(n, battery + b - a);
		s = b;
	}
	battery -= t - s;
	cout << ((battery <= 0) ? "No" : "Yes") << '\n';
    return 0;
}
