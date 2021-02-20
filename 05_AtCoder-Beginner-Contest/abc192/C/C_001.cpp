#include <bits/stdc++.h>
using namespace std;

inline int mini(int num) {
	string s = to_string(num);
	sort(s.begin(), s.end());
	return stoi(s);
}

inline int maxi(int num) {
	string s = to_string(num);
	sort(s.rbegin(), s.rend());
	return stoi(s);
}

int main() {
	int n, k; cin >> n >> k;
	int res = n;
	while (k--) {
		res = maxi(res) - mini(res);
		if (!res) break ;
	}
	cout << res << '\n';
    return 0;
}
