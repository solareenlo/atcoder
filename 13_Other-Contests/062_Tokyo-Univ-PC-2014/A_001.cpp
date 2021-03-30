#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; getline(cin, s);
	string res;
	while (s != (res = regex_replace(s, regex{"not not (?!not |not$)"}, "")))
		s = res;
	cout << res << '\n';
	return 0;
}
