#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int n, cnt, res, c[200002];
int main() {
	cin >> n;
	REP(i, n) cin >> c[i];
	REP(i, n) c[i+n] = c[i];
	REP(i, 2*n)
		if (c[i] == c[i-1]) res = max(res, ++cnt/2+1);
		else cnt = 0;
	cout << (cnt>n ? -1 : res) << '\n';
	return 0;
}
