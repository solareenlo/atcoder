#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int n, m; cin >> n >> m;
	vector<int> ab(n + 1, 0);
	while (m--) {
		int a, b; cin >> a >> b;
		ab[a]++;
		ab[b]++;
	}
	bool ok = true;
	for (auto x : ab)
		if (x % 2) {
			ok = false;
			break ;
		}
	cout << ((ok == true) ? "YES" : "NO") << '\n';
    return 0;
}
