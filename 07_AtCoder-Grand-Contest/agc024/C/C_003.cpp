#include <bits/stdc++.h>
using namespace std;
int n, a, b = -1;
int main() {
	cin >> n;
	int64_t res = -1;
	while (n--) {
		cin >> a;
		if (a-b>1) { cout << -1 << '\n'; return 0; }
		res += (a-b==1)?1:a;
		b = a;
	}
	cout << res << '\n';
	return 0;
}
