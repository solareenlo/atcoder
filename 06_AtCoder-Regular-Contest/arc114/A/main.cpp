#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int64_t prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int n, x[55];
int64_t res = 1e18;

void dfs(int i, int64_t j) {
	if (i == 15) {
		REP(i, n) if (gcd(j, x[i]) == 1) return ;
		res = min(res, j);
		return ;
	}
	dfs(i+1, j);
	dfs(i+1, j*prime[i]);
}

int main() {
	cin >> n;
	REP(i, n) cin >> x[i];
	dfs(0, 1);
	cout << res << '\n';
	return 0;
}
