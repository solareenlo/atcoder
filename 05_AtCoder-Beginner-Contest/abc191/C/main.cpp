#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	string s[h];
	REP(i, h) cin >> s[i];
	int res = 0;
	REP(i, h-1) REP(j, w-1)
		if (s[i][j] ^ s[i+1][j] ^ s[i][j+1] ^ s[i+1][j+1])
			res++;
	cout << res << '\n';
	return 0;
}
