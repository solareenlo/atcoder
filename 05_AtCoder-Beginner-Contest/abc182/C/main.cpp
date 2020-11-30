#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	string s; cin >> s;
	int n = s.size();
	int res = n;
	REP(bit, 1 << n) {
		int sum = 0;
		int cnt = 0;
		REP(i, n) {
			if (bit >> i & 1) {
				sum += s[i] - '0';
				cnt++;
			}
		}
		if (sum % 3 == 0) {
			res = min(res, n - cnt);
		}
	}
	cout << (res == n ? -1 : res) << '\n';
    return 0;
}
