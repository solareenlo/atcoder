#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	string s; cin >> s;
	int n = s.size();
	ll cnt = 0, res = 0;
	REP(i, n) {
		if (s.substr(i, 2) == "BC") {
			res += cnt;
			i++;
		}
		else if (s[i] == 'A') cnt++;
		else cnt = 0;
	}
	cout << res << '\n';
	return 0;
}
