#include <bits/stdc++.h>
using namespace std;
int res, c;
int main() {
	int n, m; cin >> n >> m;
	pair<int, int> ba[m];
	for (auto &x : ba) cin >> x.second >> x.first;
	sort(ba, ba+m);
	for (auto x : ba)
		if (c < x.second)
			res++, c = x.first - 1;
	cout << res << '\n';
	return 0;
}
