#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t res = 1, x = 1;
	while (n--) {
		x <<= 1;
		string s; cin >> s;
		if (s == "OR") res += x;
	}
	cout << res << '\n';
    return 0;
}
