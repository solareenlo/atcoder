#include <bits/stdc++.h>
using namespace std;
int64_t s[200], res;
int main() {
	int n, a; cin >> n;
	while (n--) {
		cin >> a;
		res += s[a%200]++;
	}
	cout << res << '\n';
	return (0);
}
