#include <bits/stdc++.h>
using namespace std;

int main() {
	char x; cin >> x;
	string s; cin >> s;
	for (int i = 0; i < (int)s.size(); i++)
		if (s[i] != x)
			cout << s[i];
	cout << '\n';
	return 0;
}
