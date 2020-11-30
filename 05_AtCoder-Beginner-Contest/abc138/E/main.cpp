#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	string s2 = s + s;
	long long res = -1;
	for (int i = 0; i < (int)t.size(); i++) {
		string s3 = s2.substr((res + 1) % (int)s.size());
		int pos = s3.find(t[i]);
		if (pos == string::npos) {
			cout << -1 << '\n';
			return 0;
		}
		res += pos + 1;
	}
	cout << res + 1 << '\n';
	return 0;
}
