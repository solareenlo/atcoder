#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int cnt[1001] = {};
	REP(i, n+m) {
		int a; cin >> a;
		cnt[a]++;
	}
	REP(i, 1001) if (cnt[i]==1)
		cout << i << ' ';
	return 0;
}
