#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int k; cin >> k;

	REP(i, n) {
		int tmp = ('z' + 1) - s[i];
		if (k >= tmp && s[i] != 'a') {
			s[i] = 'a';
			k -= tmp;
		}
	}
	s[n - 1] += k % 26;
	cout << s << '\n';
	return 0;
}
