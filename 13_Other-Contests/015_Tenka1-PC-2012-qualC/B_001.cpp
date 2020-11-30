#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	vector<string> cards;
	vector<char> mark = {'S', 'H', 'D', 'C'};
	string card;
	REP(i, n) {
		if (s[i] == 'S' || s[i] == 'H' || s[i] == 'D' || s[i] == 'C') {
			if (i > 0) {
				cards.push_back(card);
				card = "";
			}
		}
		card += s[i];
	}
	cards.push_back(card);

	vector<string> res(4, "");
	vector<int> cnt(4, 0);
	set<string> royalnum = {"10", "J", "Q", "K", "A"};
	for (auto c : cards) {
		REP(i, 4) {
			if (c[0] == mark[i] && royalnum.count(c.substr(1))) {
				cnt[i]++;
				if (cnt[i] == 5) {
					cout << (res[i] == "" ? "0" : res[i]) << '\n';
					return 0;
				}
			}
			else res[i] += c;
		}
	}
	return 0;
}
