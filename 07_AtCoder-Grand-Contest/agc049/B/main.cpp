#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

vector<int> imos(string s) {
	int n = s.size();
	vector<int> res(n);
	int cur = 0;
	REP(i ,n) {
		cur ^= s[i] - '0';
		res[i] = cur;
	}
	return res;
}

int main() {
	int n; cin >> n;
	string ss, tt; cin >> ss >> tt;
	vector<int> s = imos(ss);
	vector<int> t = imos(tt);
	long long res = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		j = max(j, i);
		if (s[j] == t[i]) continue ;
		while (j < n && s[j] != t[i]) j++;
		if (j == n) {
			cout << -1 << '\n';
			return 0;
		}
		res += j - i;
	}
	cout << res << '\n';
	return 0;
}
