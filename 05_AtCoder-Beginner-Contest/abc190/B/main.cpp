#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s, d; cin >> n >> s >> d;
	while (n--) {
		int x, y; cin >> x >> y;
		if (x < s && y > d) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
    return 0;
}
