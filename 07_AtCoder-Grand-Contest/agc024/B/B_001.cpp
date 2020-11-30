#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> Q(n + 1, 0);
	int maxi = 0;
	REP(i, n) {
		int P; cin >> P;
		Q[P] = Q[P - 1] + 1;
		maxi = max(maxi, Q[P]);
	}
	cout << n - maxi << '\n';
    return 0;
}
