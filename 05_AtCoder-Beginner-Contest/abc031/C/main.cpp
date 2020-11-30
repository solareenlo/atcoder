#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	int ans = -1e9;
	REP(i, n) {
		int maxiA = -1e9;
		int maxiT = -1e9;
		REP(j, n) {
			if (i == j) continue ;
			int l = min(i, j);
			int r = max(i, j);
			int sumT = 0;
			int sumA = 0;
			for (int k = l; k <= r; k++) {
				if((k - l) % 2) sumA += a[k];
				else sumT += a[k];
			}
			if (sumA > maxiA) {
				maxiA = sumA;
				maxiT = sumT;
			}
		}
		ans = max(ans, maxiT);
	}
	cout << ans << '\n';
}
