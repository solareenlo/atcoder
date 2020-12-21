#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int div = n / 20;
	int rem = n % 20;
	if (div != 0 && rem == 0)
		cout << 20 << '\n';
	else
		cout << ((div%2) ? 20-rem+1 : rem) << '\n';
	return 0;
}
