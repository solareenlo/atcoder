#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	int maxi = 0;
	REP(i, n) {
		if (s[i] == 'R') {
			cnt++;
			maxi = max(maxi, cnt);
		} else
			cnt = 0;
	}
	cout << maxi << '\n';
	return 0;
}
