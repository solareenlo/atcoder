#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int res = 0;
	REP(i, 10000) {
		bool flag[10] = {};
		int x = i;
		REP(j, 4) {
			flag[x%10] = true;
			x /= 10;
		}
		bool flag2 = true;
		REP(j, 10) {
			if (s[j]=='o' && flag[j]==0) flag2 = false;
			if (s[j]=='x' && flag[j]) flag2 = false;
		}
		res += flag2;
	}
	cout << res << '\n';
    return 0;
}
