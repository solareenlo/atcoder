#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int res = 0;
	for (int i = 1; i <= n; i++)
		res += i * i;
	cout << res % m << '\n';
	return 0;
}
