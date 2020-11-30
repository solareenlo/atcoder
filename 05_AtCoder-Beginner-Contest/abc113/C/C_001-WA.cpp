#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<P> city(m + 1);
	vector<vector<int> > s(n + 1);
	REP(i, m) {
		int p, y; cin >> p >> y;
		city[i] = make_pair(p, y);
		s[p].push_back(y);
	}

	REP(i, m)
		sort(s[city[i].first].begin(), s[city[i].first].end());

	REP(i, m) {
		auto itr = find(s[city[i].first].begin(), s[city[i].first].end(), city[i].second);
		int j = distance(s[city[i].first].begin(), itr);
		printf("%06d%06d\n", city[i].first, j + 1);
	}
    return 0;
}
