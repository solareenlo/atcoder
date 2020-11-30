#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int n = s.size();

	ll cnt = 0;
	string niko("25");
	string find_word("");
	REP(i, n / 2) {
		find_word += niko;
		auto pos = s.find(find_word);
		while (pos != string::npos) {
			cnt++;
			pos = s.find(find_word, pos + niko.size());
		}
	}
	cout << cnt << '\n';
	return 0;
}
