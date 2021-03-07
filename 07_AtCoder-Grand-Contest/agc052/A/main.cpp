#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s >> s >> s;
		cout << string(n, '0') + string(n, '1') + "0" << '\n';
	}
    return 0;
}
