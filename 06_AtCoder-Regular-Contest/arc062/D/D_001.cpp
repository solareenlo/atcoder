#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	REP(i, n) {
		if (i % 2 == 0) {
			if (s[i] == 'p') cnt--;
		}
		if (i % 2 == 1) {
			if (s[i] == 'g') cnt++;
		}
	}
	cout << cnt << '\n';
    return 0;
}
