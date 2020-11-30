#include <bits/stdc++.h>
using namespace std;
int c[26];
int main() {
	string a, b; cin >> a >> b;
	string s1 = a, s2 = b;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if(s1 != s2) {
		cout << "NO" << '\n';
		return 0;
	}

	bool ok = false;
	int cnt = 0;
	for(int i = 0; i < a.size(); i++) {
		if(a[i] != b[i]) cnt++;
		if(c[b[i]-'a']) ok = true;
		c[b[i]-'a']++;
	}

	if(cnt > 6) cout << "NO" << '\n';
	else if(ok) cout << "YES" << '\n';
	else {
		if(cnt == 2 || cnt == 6) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
