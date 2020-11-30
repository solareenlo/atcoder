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
		ll tmp = 0;
		REP(i, n) {
			tmp += s[i] - '0';
			if ((bit >> i) & 1 || i == n - 1) {
				res += tmp;
				tmp = 0;
			} else
				tmp *= 10;
		}
	}

	cout << res << '\n';
	return 0;
}
