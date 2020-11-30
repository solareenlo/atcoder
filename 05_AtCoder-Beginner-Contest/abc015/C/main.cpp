#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int n, k;
vector<vector<int> > t(5, vector<int>(5));

bool dfs(int numQ, int val) {
	if (numQ == n)
		return (val == 0);
	REP(i, k)
		if (dfs(numQ + 1, t[numQ][i]^val))
				return true;
	return false;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> k;
	REP(i, n) REP(j, k) cin >> t[i][j];

	if (dfs(0, 0)) cout << "Found" << '\n';
	else cout << "Nothing" << '\n';
	return 0;
}
