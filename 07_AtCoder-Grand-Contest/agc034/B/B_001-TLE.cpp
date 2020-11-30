#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	auto pos = s.find("ABC");
	int cnt = 0;
	while (pos != string::npos) {
		s.replace(pos, 3, "BCA");
		cnt++;
		pos = s.find("ABC");
	}
	cout << cnt << '\n';
    return 0;
}
