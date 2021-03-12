#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	int i, j = 0;
	for (i=0; i<=(int)t.size(); i++)
		if(t[i]==s[j])
			j++;
	if (s[0]!=t[0] || j<(int)s.size()) {
		cout << "No" << '\n';
		return 0;
	}
	for (i=1; i<(int)s.size() && s[i]==s[0]; i++);
	for (j=1; j<(int)t.size() && t[j]==t[0]; j++);
	cout << ((i<j) ? "No" : "Yes") << '\n';
	return 0;
}
