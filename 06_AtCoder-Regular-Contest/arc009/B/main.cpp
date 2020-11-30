#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<string, int>;

inline bool compareBySecond(P &a, P &b) {
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	map<char, int> b;
	REP(i, 10) {
		char tmp; cin >> tmp;
		b[tmp] = i;
	}
	int n; cin >> n;
	vector<pair<string, int> > a(n);
	REP(i, n) {
		string tmp; cin >> tmp;
		a[i] = make_pair(tmp, 0);
	}

	REP(i, n) {
		REP(j, (int)a[i].first.size()) {
			a[i].second *= 10;
			a[i].second += b[a[i].first[j]];
		}
	}
	sort(a.begin(), a.end(), compareBySecond);
	REP(i, n)
		cout << a[i].first << '\n';
    return 0;
}
