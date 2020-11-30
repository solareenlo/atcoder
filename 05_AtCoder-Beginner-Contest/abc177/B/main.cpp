#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string s, t; cin >> s >> t;

	int res = 0;
	REP(i, (int)s.size() - (int)t.size() + 1) {
		int cnt = 0;
		REP(j, (int)t.size()) {
			if (s[i + j] == t[j])
				cnt++;
		}
		res = max(res, cnt);
	}
	cout << t.size() - res << '\n';
	return 0;
}
