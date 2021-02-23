#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int64_t res = 0, cnt = 0;
	char tmp = '0';
	for (int i=1; i<(int)s.size(); i++) {
		res += cnt;
		if (s[i] == tmp) --res;
		else if (s[i-1] == s[i]) {
			cnt++;
			tmp = s[i];
		}
	}
	cout << res << '\n';
    return 0;
}
