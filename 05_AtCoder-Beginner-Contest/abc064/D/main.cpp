#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;

	int cnt = 0;
	string res = s;
	REP(i, n) {
		if (s[i] == '(') cnt++;
		else {
			cnt--;
			if (cnt < 0) {
				res = '(' + res;
				cnt++;
			}
		}
	}

	while (cnt) {
		res += ')';
		cnt--;
	}

	cout << res << '\n';
	return 0;
}
