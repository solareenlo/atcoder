#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	string res = "set";
	REP(i, n) {
		if (s[i] == '{') cnt++;
		if (s[i] == ':' && cnt == 1) res = "dict";
		if (s[i] == '}') cnt--;
	}
	if (n == 2) res = "dict";
	cout << res << '\n';
	return 0;
}
