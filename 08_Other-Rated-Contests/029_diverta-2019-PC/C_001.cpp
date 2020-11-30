#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	int cntAB = 0;
	int cntA = 0;
	int cntB = 0;
	int cntBA = 0;
	string find_word("AB");
	REP(i, n) {
		string s; cin >> s;
		auto pos = s.find(find_word);
		while (pos != string::npos) {
			cntAB++;
			pos = s.find(find_word, pos + find_word.length());
		}
		if (s.front() == 'B' && s.back() == 'A') cntBA++;
		if (s.front() == 'B' && s.back() != 'A') cntB++;
		if (s.front() != 'B' && s.back() == 'A') cntA++;
	}

	if (cntBA) {
		if (cntB + cntA)
			cout << cntAB + cntBA + min(cntB, cntA) << '\n';
		else
			cout << cntAB + cntBA - 1 << '\n';
	} else
		cout << cntAB + min(cntB, cntA) << '\n';
	return 0;
}
