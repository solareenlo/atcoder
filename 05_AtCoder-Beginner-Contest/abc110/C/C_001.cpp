#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(vec) (vec).begin(), (vec).end()
using namespace std;
using P = pair<char, char>;

inline bool compareBySecond(P &a, P &b) {
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);

	string s, t; cin >> s >> t;
	int n = s.size();

	vector<P> c;
	REP(i, n)
		c.push_back(make_pair(s[i], t[i]));

	bool ok = true;
	sort(ALL(c));
	REP(i, (int)c.size() - 1) {
		if (c[i].first == c[i+1].first)
			if (c[i].second != c[i+1].second)
				ok = false;
	}
    sort(ALL(c), compareBySecond);
	REP(i, (int)c.size() - 1) {
		if (c[i].second == c[i+1].second)
			if (c[i].first != c[i+1].first)
				ok = false;
	}

	if (ok) cout << "Yes" << '\n';
	else cout << "No" << '\n';
    return 0;
}
