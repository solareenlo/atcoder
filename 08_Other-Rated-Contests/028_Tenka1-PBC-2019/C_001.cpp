#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;

	int mini = n;
	int cntB = 0;
	int cntW = 0;
	REP(i, n) {
		if (s[i] == '.')
			cntW++;
	}
	mini = min(mini, cntB + cntW);
	REP(i, n) {
		if (s[i] == '#')
			cntB++;
		else
			cntW--;
		mini = min(mini, cntB + cntW);
	}
	cout << mini << '\n';
	return 0;
}
