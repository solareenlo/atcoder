#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	int mid = a[n - 1] / 2;
	auto itr = lower_bound(a.begin(), a.end(), mid);
	if (*itr == a[n - 1])
		cout << a[n - 1] << ' ' << a[n - 2] << '\n';
	else {
		int index = distance(a.begin(), itr);
		if (abs(mid - a[index]) <= abs(mid - a[index - 1]))
			cout << a[n - 1] << ' ' << a[index] << '\n';
		else
			cout << a[n - 1] << ' ' << a[index - 1] << '\n';
	}
    return 0;
}
