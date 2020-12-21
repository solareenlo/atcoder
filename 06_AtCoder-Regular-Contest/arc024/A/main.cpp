#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int L, R; cin >> L >> R;
	multiset<int> l, r;
	REP(i, L) {
		int t; cin >> t;
		l.insert(t);
	}
	REP(i, R) {
		int t; cin >> t;
		r.insert(t);
	}
	multiset<int> res;
	set_intersection(l.begin(), l.end(),
			r.begin(), r.end(),
			inserter(res, res.end()));

    cout << (int)res.size() << '\n';
	return 0;
}
