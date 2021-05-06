#include <bits/stdc++.h>
using namespace std;
int64_t n, x, sum, maxi;
int main() {
	cin >> n;
	while (cin >> x) {
		sum += x;
		maxi = max(maxi, x);
	}
	cout << sum + maxi + n<< '\n';
	return 0;
}
