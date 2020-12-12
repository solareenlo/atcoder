#include <bits/stdc++.h>
using namespace std;

int main () {
	int n; cin >> n;
	long long res = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		res += a;
	}
	cout << res - n << '\n';
	return 0;
}
