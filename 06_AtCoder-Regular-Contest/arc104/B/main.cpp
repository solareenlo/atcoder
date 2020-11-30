#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	REP(i, n) {
		map<char, int> m = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};
		for (int j = i; j < n; j++) {
			m[s[j]]++;
			if (m['A'] == m['T'] && m['C'] == m['G'])
				cnt++;
		}
	}
	cout << cnt << '\n';
    return 0;
}
