#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	string s, t; cin >> s >> t;
	string s2 = s + s;
	ll res = -1;
	REP(i, (int)t.size()) {
		string s3 = s2.substr((1 + res) % s.size());
		int tmp = s3.find(t[i]);
		if (tmp == string::npos) {
			cout << -1 << '\n';
			return 0;
		}
		res += tmp + 1;
	}
	cout << res + 1 << '\n';
    return 0;
}
