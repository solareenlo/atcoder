#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void makeCombUtil(vector<vector<int> > &ans, vector<int> &tmp, int n, int left, int k) {
	if (k == 0) {
		ans.push_back(tmp);
		return ;
	}
	for (int i = left; i <= n; ++i) {
		tmp.push_back(i);
		makeCombUtil(ans, tmp, n, i + 1, k - 1);
		tmp.pop_back();
	}
}

vector<vector<int> > makeComb(int n, int k) {
	vector<vector<int> > ans;
	vector<int> tmp;
	makeCombUtil(ans, tmp, n, 1, k);
	return ans;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;

	set<string> res;
	vector<vector<int> > comb = makeComb(n, 3);
	REP(i, (int)comb.size()) {
		string num = "";
		REP(j, 3)
			num += s[comb[i][j] - 1];
		res.insert(num);
	}
	cout << res.size() << '\n';
	return 0;
}
