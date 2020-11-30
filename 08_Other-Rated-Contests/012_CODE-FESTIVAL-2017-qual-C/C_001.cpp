#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int cnt = 0;
	while (s.size() > 1) {
		int n = s.size();
		if (s[0] == s[n - 1]) {
			s.erase(s.begin());
			s.pop_back();
		} else if (s[0] == 'x') {
			s.push_back('x');
			cnt++;
		} else if (s[n - 1] == 'x') {
			s.insert(s.begin(), 'x');
			cnt++;
		} else {
			cnt = -1;
			break ;
		}
	}
	cout << cnt << '\n';
	return 0;
}
