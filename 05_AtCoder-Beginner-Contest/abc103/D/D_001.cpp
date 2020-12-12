#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n, m; cin >> n >> m;
	vector<P> ba(m);
	REP(i, m) cin >> ba[i].second >> ba[i].first;
	sort(ba.begin(), ba.end());
	int res = 0;
	int bridge = 0;
	REP(i, m) {
		if (bridge < ba[i].second) {
			res++;
			bridge = ba[i].first - 1;
		}
	}
	cout << res << '\n';
    return 0;
}
