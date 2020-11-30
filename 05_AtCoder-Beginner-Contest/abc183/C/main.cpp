#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int a[10];
int main() {
	int n, k; cin >> n >> k;
	int t[n][n];
	REP(i, n) REP(j, n) cin >> t[i][j];
	REP(i, n) a[i] = i;
	int res = 0;
	do {
		int cost = 0;
		REP(i, n) cost += t[a[i]][a[(i+1)%n]];
		if (cost == k) res++;
	} while (next_permutation(a+1, a+n));
	cout << res << '\n';
	return (0);
}
