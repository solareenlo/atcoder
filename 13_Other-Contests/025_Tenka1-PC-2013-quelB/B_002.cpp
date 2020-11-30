#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
	int Q, L; cin >> Q >> L;
	stack<P> st;
	int size = 0;
	while (Q--) {
		string s; cin >> s;
		if (s == "Push") {
			int n, m; cin >> n >> m;
			if (size > L - n) {
				cout << "FULL" << '\n';
				return 0;
			}
			st.push(P(m, n));
			size += n;
		}
		if (s == "Pop") {
			int n; cin >> n;
			if (n > size) {
				cout << "EMPTY" << '\n';
				return 0;
			}
			size -= n;
			while (n > 0) {
				if (st.top().second > n) {
					st.top().second -= n;
					break ;
				}
				n -= st.top().second;
				st.pop();
			}
		}
		if (s == "Top") {
			if (size == 0) {
				cout << "EMPTY" << '\n';
				return 0;
			}
			cout << st.top().first << '\n';
		}
		if (s == "Size") cout << size << '\n';
	}
	cout << "SAFE" << '\n';
	return 0;
}
