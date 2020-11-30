#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	int n = s.size();
	map<char, vector<int> > mp;
	REP(i, 2 * n)
		mp[s[i % n]].push_back(i);
	long long res = -1;
	for (char c : t) {
		int i = res % n;
		auto itr = upper_bound(mp[c].begin(), mp[c].end(), i);
		if (itr == mp[c].end()) {
			cout << -1 << '\n';
			return 0;
		}
		res += *itr - i;
	}
	cout << res + 1 << '\n';
	return 0;
}
