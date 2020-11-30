#include <bits/stdc++.h>
using namespace std;

int n;

inline void dfs(string s, char mx) {
	if ((int)s.size() == n) {
		cout << s << '\n';
		return ;
	}
	for (char c = 'a'; c <= mx+1; c++)
		dfs(s+c, max(mx, c));
}

int main() {
	cin >> n;
	dfs("", 'a'-1);
	return 0;
}
