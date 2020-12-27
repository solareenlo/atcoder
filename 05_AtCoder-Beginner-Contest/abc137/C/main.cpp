#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<string, int> str;
	int64_t res = 0;
	while (n--) {
		string s; cin >> s;
		sort(s.begin(), s.end());
		res += str[s]++;
	}
	cout << res << '\n';
	return 0;
}
