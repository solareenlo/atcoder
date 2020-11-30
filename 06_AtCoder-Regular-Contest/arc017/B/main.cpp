#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	vector<int> diff(n - 1, 0);
	REP(i, n - 1) {
		if(a[i + 1] - a[i] > 0)
			diff[i] = 1;
	}

	vector<int> s(n, 0);
	REP(i, n - 1) s[i + 1] = s[i] + diff[i];

	int cnt = 0;
	REP(i, n - k + 1) {
		if (s[i + k - 1] - s[i] == k - 1)
			cnt++;
	}

	cout << cnt << '\n';
    return 0;
}
