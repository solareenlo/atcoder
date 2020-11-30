#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	int n; cin >> n;
	vector<string> s(n);
	REP(i, n) cin >> s[i];
	REP(i, n) reverse(s[i].begin(), s[i].end());
	sort(s.begin(), s.end());
	REP(i, n) reverse(s[i].begin(), s[i].end());
	REP(i, n) cout << s[i] << '\n';
	return 0;
}
