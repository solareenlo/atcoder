#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	map<int, int> score;
	REP(i, n) {
		int a; cin >> a;
		score[a]++;
	}
	int maxi = 0;
	int cnt = 0;
	for (auto x : score) {
		if (cnt < x.second) {
			maxi = x.first;
			cnt = x.second;
		}
	}
	if (cnt > n / 2) cout << maxi << '\n';
	else cout << "?" << '\n';
	return 0;
}
