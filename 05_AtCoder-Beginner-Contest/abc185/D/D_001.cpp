#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[m+2];
	a[0] = 0;
	REP(i, m) cin >> a[i+1];
	sort(a, a+m+1);
	a[m+1] = n+1;
	vector<int> diff;
	REP(i, m+1) {
		if (a[i+1]-a[i]-1 != 0)
			diff.push_back(a[i+1]-a[i]-1);
	}
	sort(diff.begin(), diff.end());
	int res = 0;
	if (diff.size()) {
		int mini = diff[0];
		for (int x : diff) {
			res += x / mini;
			res += !!(x % mini);
		}
	}
	cout << res << '\n';
    return 0;
}
