#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int64_t n; cin >> n;
		cout << (n%2?"Odd":n%4?"Same":"Even") << '\n';
	}
	return 0;
}
