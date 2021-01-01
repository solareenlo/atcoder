#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	cout << '\n';
	vector<int> res;
	REP(i, n) {
		auto itr = lower_bound(res.rbegin(), res.rend(), a[i]);
		if (itr == res.rbegin()) res.push_back(a[i]);
		else {
			--itr;
			*itr = a[i];
		}
	}
	cout << res.size() << '\n';
    return 0;
}
