#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int N; cin >> N;
	vector<int> s;
	REP(i, N) {
		int tmp; cin >> tmp;
		if (tmp != 0)
			s.push_back(tmp);
	}
	sort(s.rbegin(), s.rend());
	int n = s.size();
	int q; cin >> q;
	REP(i, q) {
		int k; cin >> k;
		cout << ((k >= n) ? 0 : (s[k] + 1)) << '\n';
	}
	return 0;
}
