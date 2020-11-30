#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	long long res = 0;
	REP(i, n) {
		if (s[i] == 'A') cnt++;
		else if (s.substr(i, 2) == "BC") {
			res += cnt;
			i++;
		}
		else cnt = 0;
	}
	cout << res << '\n';
	return 0;
}
