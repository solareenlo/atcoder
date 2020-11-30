#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	string s;
	cin >> s;
	reverse(s.begin(), s.end());

	bool ok = true;
	while (true) {
		if (s[0] == 'm') {
			if ("maerd" != s.substr(0, 5)) {
				ok = false;
				break ;
			} else s.erase(s.begin(), s.begin() + 5);
		} else if (s[0] == 'r') {
			if ("remaerd" != s.substr(0, 7)) {
				if ("resare" != s.substr(0, 6)) {
					ok = false;
					break ;
				} else s.erase(s.begin(), s.begin() + 6);
			} else s.erase(s.begin(), s.begin() + 7);
		} else if (s[0] == 'e') {
			if ("esare" != s.substr(0, 5)) {
				ok = false;
				break ;
			} else s.erase(s.begin(), s.begin() + 5);
		} else {
			ok = false;
			break;
		}
		if (s.size() == 0) break ;
	}

	if (ok) cout << "YES" << '\n';
	else cout << "NO" << '\n';
    return 0;
}
