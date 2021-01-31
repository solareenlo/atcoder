#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	if (c == 0) {
		while (1) {
			if (a == 0) {
				cout << "Aoki" << '\n';
				return 0;
			}
			if (b == 0) {
				cout << "Takahashi" << '\n';
				return 0;
			}
			a--, b--;
		}
	}
	while (1) {
		if (b == 0) {
			cout << "Takahashi" << '\n';
			return 0;
		}
		if (a == 0) {
			cout << "Aoki" << '\n';
			return 0;
		}
		a--, b--;
	}
    return 0;
}
