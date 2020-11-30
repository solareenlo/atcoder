#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string res = "";
	if (!n) res = "0";
	while (n) {
		if (n % 2) {
			res.push_back('1');
			n--;
		}
		else res.push_back('0');
		n /= -2;
	}
	reverse(res.begin(), res.end());
	cout << res << '\n';
	return 0;
}
