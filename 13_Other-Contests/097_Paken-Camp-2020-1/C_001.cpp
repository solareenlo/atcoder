#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	map<string, int> s;
	REP(i, n) {
		int k; cin >> k;
		REP(j, k) {
			string S; cin >> S;
			s[S]++;
		}
	}
	int res = 0;
	for (auto x : s) {
		if (x.second == n) res++;
	}
	cout << res << '\n';
	return 0;
}
