#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	int64_t maxi = 0;
	REP(i, n)  {
		int64_t sum = 0;
		for (int j = i; j < n; j++) {
			if (a[i] <= a[j]) sum += a[i];
			else break ;
		}
		for (int j = i-1; j >= 0; j--) {
			if (a[i] <= a[j]) sum += a[i];
			else break ;
		}
		maxi = max(maxi, sum);
	}
	cout << maxi << '\n';
    return 0;
}
