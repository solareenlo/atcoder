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
		int t = 0, u = 0;
		t += s[0] - '0' + 10 * (s[1] - '0');
		u += s[1] - '0' + 10 * (s[0] - '0');
		if (t % 8 == 0 || u % 8 == 0)
			ok = true;
	}
	else {
		vector<string> e;
		for (int i = 13; i < 125; i++) {
			string tmp = to_string(8 * i);
			if (tmp[0] == '0') continue ;
			if (tmp[1] == '0') continue ;
			if (tmp[2] == '0') continue ;
			e.emplace_back(tmp);
		}
		vector<int> cnt(10, 0);
		for (char x : s)
			cnt[x - '0']++;
		for (auto i : e) {
			auto c = cnt;
			for (char x : i)
				c[x - '0']--;
			int sum = 0;
			for (int j = 0; j < 10; j++)
				if (c[j] >= 0)
					sum++;
			if (sum == 10)
				ok = true;
		}
	}
	cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}
