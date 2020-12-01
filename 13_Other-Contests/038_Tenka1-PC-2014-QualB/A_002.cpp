#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	auto pos = s.find("HAGIYA");
	s.replace(pos, 6, "HAGIXILE");
	cout << s << '\n';
	return 0;
}
