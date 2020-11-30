#include <bits/stdc++.h>
using namespace std;
int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0 && s[i] == 'p') cnt--;
		if (i % 2 == 1 && s[i] == 'g') cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
