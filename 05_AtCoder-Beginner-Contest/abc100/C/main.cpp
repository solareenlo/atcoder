#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		while (a % 2 == 0) {
			a /= 2;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
