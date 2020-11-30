#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	if (s.back() == 's')
		cout << s << "es" << '\n';
	else cout << s << "s" << '\n';
	return 0;
}
