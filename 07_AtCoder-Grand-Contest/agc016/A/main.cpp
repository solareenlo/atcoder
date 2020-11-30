#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int mini = 1e9;
	REP(i, 26) {
		int cnt = 0;
		int maxi = 0;
		REP(j , n) {
			if (s[j] == i + 'a') {
				maxi = max(maxi, cnt);
				cnt = 0;
			}
			else cnt++;
		}
		maxi = max(maxi, cnt);
		mini = min(mini, maxi);
	}
	cout << mini << '\n';
    return 0;
}
