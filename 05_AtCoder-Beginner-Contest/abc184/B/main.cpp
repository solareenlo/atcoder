#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n, x; cin >> n >> x;
	string s; cin >> s;
	REP(i, n) {
		if (s[i] == 'o') x++;
		if (x != 0 && s[i] == 'x') x--;
	}
	cout << x << '\n';
    return 0;
}
