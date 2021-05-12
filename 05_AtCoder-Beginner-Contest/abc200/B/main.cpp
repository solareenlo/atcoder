#include <bits/stdc++.h>
using namespace std;

int main() {
	string n; cin >> n;
	int k; cin >> k;
	while (k--) {
		int64_t	tmp = stol(n);
		if (tmp % 200 == 0) {
			tmp /= 200;
			n = to_string(tmp);
		}
		else
			n += "200";
	}
	cout << n << '\n';
    return 0;
}
