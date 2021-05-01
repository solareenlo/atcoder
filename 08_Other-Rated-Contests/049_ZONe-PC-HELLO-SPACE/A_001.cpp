#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	auto pos = s.find("ZONe");
	int	res = 0;
	while (pos != string::npos) {
		res++;
		pos = s.find("ZONe", pos+4);
	}
	cout << res << '\n';
	return 0;
}
