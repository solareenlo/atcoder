#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int maxi = 0;
	REP(i, n) {
		int sum = 0;
		REP(j, m) {
			int a; cin >> a;
			sum += a;
		}
		maxi = max(maxi, sum);
	}
	cout << maxi << '\n';
	return 0;
}
