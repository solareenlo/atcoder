#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> l(n);
	REP(i, n) cin >> l[i];

	int cnt = 0;
	REP(i, n) for (int j = i+1; j < n; j++) for (int k = j+1; k < n; k++) {
		if (l[i] == l[j] || l[j] == l[k] || l[k] == l[i]) continue ;
		if (!(l[i] + l[j] <= l[k] || l[i] + l[k] <= l[j] || l[j] + l[k] <= l[i]))
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
