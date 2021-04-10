#include <bits/stdc++.h>
using namespace std;

int main() {
	int k; cin >> k;
	string s; cin >> s;
	int n = s.size();
	int l;
	for (int i=0; i<n; i++) {
		if ((i==0 || s[i-1]!='s') && s[i]=='s')
			l=i;
		else if ((i>0 && s[i-1]=='s') && s[i]!='s' && s[i]<'s') {
			for (int j=l; j<i; j++) if (k>0) {
				s[j] = '*';
				k--;
			}
		}
	}
	for (int i=n-1; i>=0; i--) if (s[i]=='s' && k>0) {
		s[i]='*';
		k--;
	}
	for (int i=0; i<n; i++) if (s[i]!='*')
		cout << s[i];
	return 0;
}
