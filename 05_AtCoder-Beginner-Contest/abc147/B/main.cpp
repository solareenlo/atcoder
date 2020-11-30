#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	REP(i, n/2) cnt += (s[i] != s[n - 1 - i]);
	cout << cnt << '\n';
	return 0;
}
