#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	bool ok = false;
	if (n == 1) {
		if (s[0] == '8')
			ok = true;
	}
	else if (n == 2) {
		if (stoi(s) % 8 == 0)
			ok = true;
		swap(s[0], s[1]);
		if (stoi(s) % 8 == 0)
			ok = true;
	}
	else {
		vector<int> cnt(10, 0);
		for (auto x : s)
			cnt[x - '0']++;
		for (int i = 112; i < 1000; i += 8) {
			auto c = cnt;
			for (char x : to_string(i))
				c[x - '0']--;
			int tmp = 0;
			for (int i = 0; i < 10; i++)
				if (c[i] >= 0)
					tmp++;
			if (tmp == 10)
				ok = true;
		}
	}
	cout << (ok ? "Yes" : "No") << '\n';
	return 0;
}
