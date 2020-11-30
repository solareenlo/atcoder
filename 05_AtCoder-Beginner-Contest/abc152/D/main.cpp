#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;
int a[10][10];
int main() {
	int n; cin >> n;
	REP(i, n) {
		string s = to_string(i+1);
		a[s.front()-'0'][s.back()-'0']++;
	}
	int res = 0;
	REP(i, 10) REP(j, 10)
		res += a[i][j] * a[j][i];
	cout << res <<'\n';
	return 0;
}
