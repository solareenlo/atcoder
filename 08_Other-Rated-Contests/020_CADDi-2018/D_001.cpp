#include <bits/stdc++.h>
using namespace std;
int n, cnt, a;
int main() {
	cin.tie(0)->sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> a;
		if (a % 2) {
			cout << "first" << '\n';
			return 0;
		}
	}
	cout << "second" << '\n';
	return 0;
}
