#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size(), k, l = 0; cin >> k;
	string t[n*5];
	REP(i, n) REP(j, k)
		if (i+j < n)
			t[l++] = s.substr(i, j+1);
	sort(t, t+l);
	unique(t, t+l);
	cout << t[k-1] << '\n';
	return 0;
}
