#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string s; cin >> s;
	vector<int> sa = suffix_array(s);
	long long res = 1LL * s.size() * (s.size() + 1) / 2;
	for (auto x : lcp_array(s, sa))
		res -= x;
	cout << res << '\n';
	return 0;
}
