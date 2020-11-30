#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	string t;
	while (1) {
		t.push_back(s.front());
		s.erase(s.begin());
		if (t.size() >= 3) {
			if (t.substr(t.size() - 3) == "fox") {
				t.erase(t.size() - 3);
			}
		}
		if (s.size() == 0)
			break ;
	}
	cout << t.size() << "\n";
    return 0;
}
