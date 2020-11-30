#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	for (int i = 2; i < s.size(); i++)
		if (s[i-2] == 'f' && s[i-1] == 'o' && s[i] == 'x')
			s.erase(i-2, 3), i -= 3;
	cout << s.size() << '\n';
	return 0;
}
