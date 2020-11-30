#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	map<int, int> m;
	int cnt = 0, res = 0;
	REP(i, n) {
		if (s[i] == '0' && s[i] != s[i - 1]) cnt++;
		if (s[i] == '0') m[cnt] = i + 1;
		res = max(res, i + 1 - m[cnt - k]);
	}
	cout << res << '\n';
    return 0;
}
