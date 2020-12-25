#include <bits/stdc++.h>
using namespace std;

int main () {
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	int n = s1.size() / 2;
	int n1 = 0, n2 = 0;
	for (char c : s3) {
		int i = 0;
		if (n1<n && (i=s1.find(c)) != string::npos) {
			s1.erase(i, 1);
			n1++;
		} else if (n2<n && (i=s2.find(c)) != string::npos) {
			s2.erase(i, 1);
			n2++;
		} else {
			cout << "NO" << '\n';
			return 0;
		}
	}
	cout << ((n1+n2==2*n)?"YES":"NO") << '\n';
	return 0;
}
