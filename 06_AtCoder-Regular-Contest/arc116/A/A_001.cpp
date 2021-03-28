#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int64_t n; cin >> n;
		cout << (n&1?"Odd":n&3?"Same":"Even") << '\n';
	}
    return 0;
}
