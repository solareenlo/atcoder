#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size(), cnt[128] = {};
	int64_t res = 0;
	for (int i=n; i>0; i--) {
		if (s[i-1] == s[i]) {
			for (char c='a'; c<='z'; c++) if (s[i]!=c) {
				res += cnt[c];
				cnt[s[i]] += cnt[c];
				cnt[c] = 0;
			}
		}
		cnt[s[i]]++;
	}
	cout << res << '\n';
	return 0;
}
