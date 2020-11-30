#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> e(1e5 + 1, 0), o(1e5 + 1, 0);
	REP(i, n) {
		int v; cin >> v;
		if (i % 2) o[v]++;
		else e[v]++;
	}

	int maxE = max_element(e.begin(), e.end()) - e.begin();
	int maxO = max_element(o.begin(), o.end()) - o.begin();
	int res = 0;
	if (maxE != maxO) res = n - e[maxE] - o[maxO];
	else {
		sort(e.rbegin(), e.rend());
		sort(o.rbegin(), o.rend());
		res = min(n - o[0] - o[1], n - e[0] - e[1]);
	}

	cout << res << '\n';
    return 0;
}
