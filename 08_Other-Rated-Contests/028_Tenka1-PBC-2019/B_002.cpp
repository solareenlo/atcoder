#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	int k; cin >> k;
	k--;
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == s[k]) cout << s[k];
		else cout << "*";
	}
	cout << '\n';
	return 0;
}
