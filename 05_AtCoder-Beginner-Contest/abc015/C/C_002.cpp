#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int n , k;
vector<vector<int> > t(5, vector<int>(5));

// numQ は，今の質問数
bool dfs(int numQ, int val) {
	if (numQ == n) // 質問が最後まで来たら
		return (val == 0); // xor が 0 ならば，true を返す
	REP(i, k)
		if (dfs(numQ + 1, val^t[numQ][i]))
			return true; // true が帰ってきたら，true
	return false; // 探索した結果 true が無ければ，false
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> k;
	REP(i, n) REP(j, k) cin >> t[i][j];

	bool ok = dfs(0, 0);
	if (ok) cout << "Found" << '\n';
	else cout << "Nothing" << '\n';
	return 0;
}
