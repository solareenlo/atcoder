#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int replace(int N, char S[]) {
	string s = "IJPC";
	int res = 4;
	REP(i, 1<<4) {
		int now = 0;
		REP(j, N) {
			if ((i>>now) & 1 || S[j] == s[now])
				now++;
			if (now == 4) break ;
		}
		if (now == 4)
			res = min(res, __builtin_popcount(i));
	}
	return res;
}
