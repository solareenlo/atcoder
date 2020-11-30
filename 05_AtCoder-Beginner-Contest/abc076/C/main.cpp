#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	reverse(s.begin(), s.end());
	int n_s = s.size();
	string t; cin >> t;
	reverse(t.begin(), t.end());
	int n_t = t.size();

	bool ok = false;
	int n = n_s - n_t;
	REP(i, n + 1) {
		int cnt = 0;
		string sub = s.substr(i, n_t);
		REP(j, n_t) {
			if (sub[j] == '?' || sub[j] == t[j])
				cnt++;
		}
		if (cnt == n_t) {
			ok = true;
			s.replace(i, n_t, t);
			break ;
		}
	}

	if (ok) {
		REP(i, n_s)
			if (s[i] == '?')
				s[i] = 'a';
		reverse(s.begin(), s.end());
		cout << s << '\n';
	} else
		cout << "UNRESTORABLE" << '\n';
    return 0;
}
