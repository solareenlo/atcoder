#include <bits/stdc++.h>
using namespace std;

char f(char x, char y) {
	string z{x, y};
	if (z == "RP" || z == "PS" || z == "SR") return y;
	else return x;
}

int main() {
	int n, k; cin >> n >> k;
	string t; cin >> t;
	while (k--) {
		string s = t + t;
		t = "";
		for (int i = 0; i < n; i++)
			t += f(s[i*2], s[i*2+1]);
	}
	cout << t[0] << '\n';
	return 0;
}
