#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

inline bool isSkip(char c) {
	bool ok = false;
	if (c == 'a' || c == 'e' || c == 'i')
		ok = true;
	if (c == 'o' || c == 'u' || c == 'y')
		ok = true;
	if (c == ',' || c == '.')
		ok = true;
	return ok;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<string> w(n);
	REP(i, n) {
		string tmp; cin >> tmp;
		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		w[i] = tmp;
	}

	map<char, char> num;
	num['b'] = '1'; num['c'] = '1';
	num['d'] = '2'; num['w'] = '2';
	num['t'] = '3'; num['j'] = '3';
	num['f'] = '4'; num['q'] = '4';
	num['l'] = '5'; num['v'] = '5';
	num['s'] = '6'; num['x'] = '6';
	num['p'] = '7'; num['m'] = '7';
	num['h'] = '8'; num['k'] = '8';
	num['n'] = '9'; num['g'] = '9';
	num['z'] = '0'; num['r'] = '0';

	vector<string> ret;
	REP(i, n) {
		string tmp;
		REP(j, (int)w[i].size()) {
			if (!isSkip(w[i][j]))
				tmp += num[w[i][j]];
		}
		if (tmp.size())
			ret.push_back(tmp);
	}

	int N = ret.size();
	REP(i, N) {
		cout << ret[i];
		if (i != N - 1 && ret[i].size())
			cout << ' ';
	}
	cout << '\n';
    return 0;
}
