#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int64_t k; cin >> k;
	for (int i = 0; i < min(int64_t(s.size()), k); i++)
		if (s[i] > '1') {
			cout << s[i] << '\n';
			return 0;
		}
	cout << 1 << '\n';
	return 0;
}
