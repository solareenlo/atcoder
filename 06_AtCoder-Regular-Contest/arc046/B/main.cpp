#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b; cin >> n >> a >> b;
	bool t = false;
	if (n <= a) t = true;
	else if (n > a) {
		if (a == b) {
			if (n % (a + 1))
				t = true;
		}
		else {
			if (a > b)
				t = true;
		}
	}
	cout << (t ? "Takahashi" : "Aoki") << '\n';
    return 0;
}
