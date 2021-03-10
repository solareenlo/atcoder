#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int v[n], f[n];
	REP(i, n) cin >> v[i];
	REP(i, n) cin >> f[i];
	int res = 0;
	REP(i, n) if (v[i] < 2 * f[i]) res++;
	cout << res << '\n';
	return 0;
}
