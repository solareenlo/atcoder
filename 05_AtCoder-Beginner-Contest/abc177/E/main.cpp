#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MAXI = 1e6 + 10;

inline int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> cnt(MAXI, 0);

	int d = 0;
	REP(i, n) {
		int a; cin >> a;
		cnt[a]++;
		d = gcd(d, a);
	}
	if (d > 1) {
		cout << "not coprime" << '\n';
		return 0;
	}

	for (int i = 2; i < MAXI; i++) {
		int sum = 0;
		for (int j = i; j < MAXI; j += i)
			sum += cnt[j];
		if (sum > 1) {
			cout << "setwise coprime" << '\n';
			return 0;
		}
	}
	cout << "pairwise coprime" << '\n';
	return 0;
}
