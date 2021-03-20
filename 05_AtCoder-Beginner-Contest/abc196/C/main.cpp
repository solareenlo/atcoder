#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n; cin >> n;
	int res = 0;
	for (int i=1; i<=999999; i++) {
		string s = to_string(i);
		s += s;
		if (stol(s) <= n)
			res++;
	}
	cout << res << '\n';
    return 0;
}
