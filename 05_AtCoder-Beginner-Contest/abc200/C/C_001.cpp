#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t s[200] = {}, res = 0;
	while (n--) {
		int a; cin >> a;
		a %= 200;
		res += s[a];
		s[a]++;
	}
	cout << res << '\n';
    return 0;
}
