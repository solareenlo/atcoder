#include <bits/stdc++.h>
using namespace std;

int main() {
	char win[202][202];
	win['R']['R'] = win['R']['S'] = win['S']['R'] = 'R';
	win['S']['S'] = win['P']['S'] = win['S']['P'] = 'S';
	win['P']['P'] = win['P']['R'] = win['R']['P'] = 'P';

	int n, k; cin >> n >> k;
	string s; cin >> s;
	while (k--) {
		string t = s + s;
		for (int i = 0; i < n; i++)
			s[i] = win[t[i * 2]][t[i * 2 + 1]];
	}
	cout << s[0] << '\n';
    return 0;
}
