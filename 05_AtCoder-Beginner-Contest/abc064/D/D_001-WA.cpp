#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;

	deque<char> res, tmp;
	REP(i, n) {
		res.push_back(s[i]);
		tmp.push_back(s[i]);
	}
	while (!tmp.empty()) {
		if (tmp[0] == ')') {
			res.push_front('(');
			tmp.pop_front();
		} else if (tmp[0] == '(') {
			if (tmp.size() == 1) {
				res.push_back(')');
				tmp.pop_front();
			} else if (tmp[1] == ')') {
				tmp.pop_front();
				tmp.pop_front();
			} else if (tmp[1] == '(') {
				if (tmp.back() == ')') {
					tmp.pop_front();
					tmp.pop_back();
				}
			}
		}
		if (tmp.empty()) break ;
		if (tmp.back() == '(') {
			res.push_back(')');
			tmp.pop_back();
		} else if (tmp.back() == ')') {
			if (tmp[tmp.size() - 2] == '(') {
				tmp.pop_back();
				tmp.pop_back();
			}
		}
	}

	for_each(res.begin(), res.end(), [](char x) {
		cout << x;
	});
	cout << '\n';
    return 0;
}
