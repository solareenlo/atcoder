#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	vector<int> cnt(3, 0);
	REP(i, n) {
		if (s[i] == 'J') cnt[0]++;
		else if (s[i] == 'O') cnt[1]++;
		else cnt[2]++;
	}
	REP(i, cnt[0]) cout << 'J';
	REP(i, cnt[1]) cout << 'O';
	REP(i, cnt[2]) cout << 'I';
	cout << '\n';
	return 0;
}
