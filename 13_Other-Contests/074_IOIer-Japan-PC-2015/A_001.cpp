#include <bits/stdc++.h>
using namespace std;
int64_t n, a, sum, maxi;
int main() {
	cin >> n;
	while (cin >> a) {
		sum += a;
		maxi = max(maxi, a);
	}
	cout << sum + maxi + n << '\n';
	return 0;
}
