#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int k; cin >> k;

	set<string> sub;
	REP(i, (int)s.size()) for (int j = 1; j <= k; j++)
		sub.insert(s.substr(i, j));

	int i = 1;
	for (auto x : sub) {
		if (i++ == k) {
			cout << x << '\n';
			return 0;
		}
	}
    return 0;
}
