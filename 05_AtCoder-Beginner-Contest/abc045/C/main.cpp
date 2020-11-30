#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	ll res = 0;
	REP(bit, 1 << (n - 1)) {
		string tmp;
		REP(i, n) {
			tmp += s[i];
			if (!(bit & (1 << i))) {
					res += stol(tmp);
					tmp = "";
			}
		}
	}

	cout << res << '\n';
	return 0;
}
