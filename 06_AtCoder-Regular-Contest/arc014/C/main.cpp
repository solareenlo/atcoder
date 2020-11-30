#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int res = 0;
	res += count(s.begin(), s.end(), 'R') % 2;
	res += count(s.begin(), s.end(), 'G') % 2;
	res += count(s.begin(), s.end(), 'B') % 2;
	cout << res << '\n';
	return 0;
}
