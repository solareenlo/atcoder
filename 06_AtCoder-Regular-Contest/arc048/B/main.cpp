#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int r[100002], h[100002], sum[100002], cnt[100002][3];
int main() {
	int n; cin >> n;
	REP(i, n) {
		cin >> r[i] >> h[i]; h[i]--;
		sum[r[i]]++;
		cnt[r[i]][h[i]]++;
	}
	REP(i, 100001) sum[i+1] += sum[i];
	REP(i, n) {
		int win = sum[r[i]-1] + cnt[r[i]][(h[i]+1)%3];
		int even = cnt[r[i]][h[i]] - 1;
		int lose = n - 1 - win - even;
		cout << win << " " << lose << " " << even << '\n';
	}
	return 0;
}
