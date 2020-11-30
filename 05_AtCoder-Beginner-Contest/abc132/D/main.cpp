#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1000000007;
int64_t C[2002][2002];

int main() {
	int n, k; cin >> n >> k;
	C[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		REP(j, i+1) {
			if (j == 0) C[i][j] = 1;
			else C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
		}
	}
	REP(i, k)
		cout << (C[n-k+1][i+1] * C[k-1][i]) % MOD << '\n';
	return 0;
}
