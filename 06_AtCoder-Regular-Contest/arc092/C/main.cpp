#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n; cin >> n;
	vector<P> red(n), blue(n);
	REP(i, n) cin >> red[i].first >> red[i].second;
	REP(i, n) cin >> blue[i].first >> blue[i].second;
	sort(blue.begin(), blue.end());

	int res = 0;
	REP(i, n) {
		P hit = {-1, -1};
		int index;
		REP(j, (int)red.size()) {
			if (red[j].first < blue[i].first
					&& red[j].second < blue[i].second
					&& hit.second < red[j].second) {
				hit = red[j];
				index = j;
			}
		}
		if (hit != make_pair(-1, -1)) {
			res++;
			red.erase(red.begin() + index);
		}
	}
	cout << res << '\n';
    return 0;
}
