#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	string t = s;
	reverse(t.begin(), t.end());
	REP(i, n) {
		if (t[i] == '(') t[i] = ')';
		else if (t[i] == ')') t[i] = '(';
	}
	int res = 0;
	REP(i, n/2) {
		if (s[i] != t[i])
			res++;
	}
	if (n % 2) {
		if (s[n/2] == '(' || s[n/2] == ')')
			res++;
	}
	cout << res << '\n';
	return 0;
}
