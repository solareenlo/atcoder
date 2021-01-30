#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, l, r; cin >> s >> l >> r;
	cout << clamp(s, l, r) << '\n';
	return 0;
}
