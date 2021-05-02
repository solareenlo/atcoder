#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	deque<char> q;
	bool rev = false;
	for (char c : s) {
		if (c == 'R') rev ^= 1;
		else if (rev) q.push_front(c);
		else q.push_back(c);
	}
	if (rev) reverse(q.begin(), q.end());
	string t;
	for (char c : q) {
		if (t.size() && t.back() == c) t.pop_back();
		else t.push_back(c);
	}
	cout << t << '\n';
	return 0;
}
