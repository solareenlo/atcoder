#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	auto a = s.find("oookayama");
	while (a != string::npos) {
		int b = a;
		int cnt = 0;
		while (42) {
			cnt++;
			if (b) {
				b--;
				if (s[b] != 'o') {
					b++;
					break ;
				}
			}
			else
				break ;
		}
		s.replace(b, a+3-b, (cnt%3==0?"O":cnt%3==1?"Oo":"o"));
		a = s.find("oookayama");
	}
	cout << s << '\n';
	return 0;
}
