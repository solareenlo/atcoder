#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string s; cin >> s;

	int res = 0;
	REP(i, n - 1) {
		if (s[i] == s[i+1])
			res++;
	}

	string find_word1, find_word2;
	if (s[0] == 'L') {
		find_word1 = "LR";
		find_word2 = "RL";
	} else {
		find_word1 = "RL";
		find_word2 = "LR";
	}
	auto pos = s.find(find_word1);
	int cnt = 0;
	while (pos != string::npos) {
		auto pos2 = s.find(find_word2, pos + 1);
		if (pos2 != string::npos)
			cnt++;
		else
			break ;
		pos = s.find(find_word1, pos2 + 1);
	}
	if (pos != string::npos)
		if (cnt < k)
			res++;
	cout << res + min(k, cnt) * 2 << '\n';
    return 0;
}
