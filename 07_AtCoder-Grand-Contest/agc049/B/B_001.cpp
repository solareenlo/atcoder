#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s, t; cin >> s >> t;
	long long res = 0;
	int need = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] > t[i]) {
			if (need) {
				need--;
				res += i;
			}
			else {
				need++;
				res -= i;
			}
		}
		if (s[i] < t[i]) {
			need++;
			res -= i;
		}
	}
	cout << (need ? -1 : res) << '\n';
    return 0;
}
