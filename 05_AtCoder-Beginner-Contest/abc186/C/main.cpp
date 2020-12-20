#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	set<int> res;
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		for (char c : s)
			if (c == '7') res.insert(i);
		stringstream t;
		t << std::oct << i;
		s = t.str();
		for (char c : s)
			if (c == '7') res.insert(i);

	}
	cout << n - (int)res.size() << '\n';
    return 0;
}
