#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int dp[1001];
int main() {
	int p[10] = {25,39,51,76,163,111,128,133,138};
	dp[0] = dp[58] = dp[136] = 1;
	REP(i, 9) for (int j=1001; j>=0; j--) if(dp[j])
		dp[j+p[i]] = 1;
	REP(i, 1001) if (dp[i]) cout << i << '\n';
	return 0;
}
