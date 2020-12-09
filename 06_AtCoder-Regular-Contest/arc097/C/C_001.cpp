#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int k; cin >> k;
	vector<string> t;
	REP(i, n) REP(j, k)
		if (i + j < n)
			t.push_back(s.substr(i, j+1));
	sort(t.begin(), t.end());
	unique(t.begin(), t.end());
	cout << t[k-1] << '\n';
    return 0;
}
