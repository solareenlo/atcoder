#include <bits/stdc++.h>
using namespace std;
int N;
inline void dfs(string s, char mx) {
	if ((int)s.size() == N) {
		cout << s << '\n';
		return ;
	} else {
		for (char c = 'a'; c <= mx; c++)
			dfs(s + c, ((c == mx) ? (char)(mx + 1) : mx));
	}
}
int main() {
	cin >> N;
	dfs("", 'a');
	return 0;
}
