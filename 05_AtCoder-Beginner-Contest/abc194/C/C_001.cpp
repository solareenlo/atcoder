#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t	res = 0, sum = 0, a;
	while (cin >> a) {
		res += a * a;
		sum += a;
	}
	cout << res * n - sum * sum << '\n';
    return 0;
}
