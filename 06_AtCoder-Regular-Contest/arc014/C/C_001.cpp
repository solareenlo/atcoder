#include <bits/stdc++.h>
using namespace std;
map<char, bool> mp;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	for (auto c : s)
		mp[c] ^= true;
	int res = 0;
	res += mp['R'];
	res += mp['G'];
	res += mp['B'];
	cout << res << '\n';
    return 0;
}
