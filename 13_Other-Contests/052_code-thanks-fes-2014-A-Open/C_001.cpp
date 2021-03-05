#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int p[n]; for (int &x : p) cin >> x;
	int s[m]; for (int &x : s) cin >> x, x--;
	int res = 0;
	for (int i = 0; i < m; i++)
		res += p[s[i]];
	cout << res << '\n';
	return 0;
}
