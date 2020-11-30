#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string x; cin >> x;
	int n = x.size();
	deque<char> deq;
	REP(i, n) {
		if (x[i] == 'S') {
			deq.push_back('S');
		} else if (x[i] == 'T') {
			if (deq.empty()) {
				deq.push_back('T');
			} else if (deq.back() == 'S') {
				deq.pop_back();
			} else if (deq.back() == 'T') {
				deq.push_back('T');
			}
		}
	}
	cout << deq.size() << '\n';
    return 0;
}
