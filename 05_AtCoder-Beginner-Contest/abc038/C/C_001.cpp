#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	ll ans = 0;
	REP(i, n) {
		int r = i;
		for (int j = i; j < n - 1; j++) {
			if (a[j] < a[j + 1])
				r = j + 1;
			else break ;
		}
		// cout << r - i + 1 << '\n';
		for (int j = 1; j <= r - i + 1; j++)
			ans += j;
		i += r - i;
	}

	cout << ans << '\n';
    return 0;
}
