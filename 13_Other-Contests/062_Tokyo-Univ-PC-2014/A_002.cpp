#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s;
	string tmp;
	while (cin >> tmp)
		s.push_back(tmp);
	for (int i=(int)s.size()-1; i>=0; i--) {
		if (s[i]!="not" && i-2>=0 && s[i-1]=="not" && s[i-2]=="not")
			s.erase(s.begin()+i-2, s.begin()+i);
	}
	for (int i=0; i<(int)s.size(); i++)
		if (i==0) cout << s[i];
		else cout << " " << s[i];
	cout << '\n';
	return 0;
}
