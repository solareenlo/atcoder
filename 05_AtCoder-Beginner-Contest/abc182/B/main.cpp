#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	int cntMax = 0;
	int res = 0;
	for (int i = 2; i <= 1000; i++) {
		int cnt = 0;
		REP(j, n) {
			if (a[j] % i == 0)
				cnt++;
		}
		if (cnt > cntMax) {
			cntMax = cnt;
			res = i;
		}
	}
	cout << res << '\n';
    return 0;
}
